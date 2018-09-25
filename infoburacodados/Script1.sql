--<ScriptOptions statementTerminator=";"/>

CREATE TABLE Relatorio (
	id INT NOT NULL,
	data_emissao CHAR(5),
	destinatario CHAR(5),
	id_financeiro INT NOT NULL,
	id_OS INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE FaturaMensal (
	mes INT NOT NULL,
	custo FLOAT,
	id_financeiro INT NOT NULL,
	PRIMARY KEY (mes)
);

CREATE TABLE OrdemServico (
	id INT NOT NULL,
	lista_datas CHAR(5),
	status_agendado CHAR(5),
	id_gestor_regional INT NOT NULL,
	prioridade INT,
	status_finalizado INT,
	status_respondido INT,
	custo FLOAT,
	id_despachador INT NOT NULL,
	id_buraco INT NOT NULL,
	mes INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE OSS (
	id_OS INT NOT NULL,
	id_saida INT NOT NULL,
	PRIMARY KEY (id_OS)
);

CREATE TABLE Saida (
	id INT NOT NULL,
	data CHAR(5),
	id_gestor_sistema INT NOT NULL,
	id_equipe INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE EquipamentoSaida (
	id_saida INT NOT NULL,
	id_equipamento INT NOT NULL,
	PRIMARY KEY (id_saida)
);

CREATE TABLE Equipamento (
	id INT NOT NULL,
	id_gestor_sistema INT NOT NULL,
	custo FLOAT,
	tipo CHAR(5),
	PRIMARY KEY (id)
);

CREATE TABLE Equipe (
	id INT NOT NULL,
	num_trabalhadores INT,
	custo FLOAT,
	id_gestor_sistema INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE Material (
	id INT NOT NULL,
	id_gestor_sistema INT NOT NULL,
	id_saida INT NOT NULL,
	custo FLOAT,
	unidade_medida CHAR(5),
	tipo CHAR(5),
	PRIMARY KEY (id)
);

CREATE TABLE Buraco (
	id INT NOT NULL,
	status INT,
	localizacao CHAR(5),
	tamanho CHAR(5),
	posicao_relativa CHAR(5),
	regional CHAR(5),
	num_reclamacoes INT,
	id_assessor_comunicacao INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE Notificacao (
	id INT NOT NULL,
	status INT,
	contato_informante CHAR(5),
	data_hora CHAR(5),
	id_buraco INT,
	PRIMARY KEY (id)
);

CREATE TABLE Foto (
	id INT NOT NULL,
	imagem CHAR(5),
	id_notificacao INT NOT NULL,
	PRIMARY KEY (id)
);

CREATE TABLE Usuario (
	id INT NOT NULL,
	nome CHAR(5),
	tipo CHAR(5),
	login CHAR(5),
	senha CHAR(5),
	PRIMARY KEY (id)
);

CREATE TABLE UsuarioFatura (
	mes INT NOT NULL,
	id_financeiro INT NOT NULL,
	PRIMARY KEY (id_financeiro,mes)
);

ALTER TABLE Relatorio ADD CONSTRAINT Relatorio_Usuario_FK FOREIGN KEY (id_financeiro)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE FaturaMensal ADD CONSTRAINT FaturaMensal_Usuario_FK FOREIGN KEY (id_financeiro)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE OrdemServico ADD CONSTRAINT OrdemServico_Usuario_FK FOREIGN KEY (id_gestor_regional)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE OrdemServico ADD CONSTRAINT OrdemServico_Usuario_FK1 FOREIGN KEY (id_despachador)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE OrdemServico ADD CONSTRAINT OrdemServico_Buraco_FK FOREIGN KEY (null)
	REFERENCES Buraco (id)
	ON DELETE CASCADE;

ALTER TABLE Saida ADD CONSTRAINT Saida_Equipe_FK FOREIGN KEY (id_equipe)
	REFERENCES Equipe (id)
	ON DELETE CASCADE;

ALTER TABLE Equipamento ADD CONSTRAINT Equipamento_Usuario_FK FOREIGN KEY (id_gestor_sistema)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE Equipe ADD CONSTRAINT Equipe_Usuario_FK FOREIGN KEY (id_gestor_sistema)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE Material ADD CONSTRAINT Material_Usuario_FK FOREIGN KEY (id_gestor_sistema)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE Buraco ADD CONSTRAINT Buraco_Usuario_FK FOREIGN KEY (id_assessor_comunicacao)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

ALTER TABLE Notificacao ADD CONSTRAINT Notificacao_Buraco_FK FOREIGN KEY (id_buraco)
	REFERENCES Buraco (id)
	ON DELETE CASCADE;

ALTER TABLE UsuarioFatura ADD CONSTRAINT UsuarioFatura_Usuario_FK FOREIGN KEY (id_financeiro)
	REFERENCES Usuario (id)
	ON DELETE CASCADE;

