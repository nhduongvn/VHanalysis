#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_18()
{
//=========Macro generated from canvas: Z_mass_algo_18/Z_mass_algo_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_18 = new TCanvas("Z_mass_algo_18", "Z_mass_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_18->SetHighLightColor(2);
   Z_mass_algo_18->Range(-80,-9616.819,453.3333,86551.37);
   Z_mass_algo_18->SetFillColor(0);
   Z_mass_algo_18->SetBorderMode(0);
   Z_mass_algo_18->SetBorderSize(2);
   Z_mass_algo_18->SetLeftMargin(0.15);
   Z_mass_algo_18->SetFrameBorderMode(0);
   Z_mass_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__363 = new TH1D("VbbHcc_algo_Z_mass__363","",40,0,400);
   VbbHcc_algo_Z_mass__363->SetBinContent(3,8);
   VbbHcc_algo_Z_mass__363->SetBinContent(4,1129);
   VbbHcc_algo_Z_mass__363->SetBinContent(5,11122);
   VbbHcc_algo_Z_mass__363->SetBinContent(6,34368);
   VbbHcc_algo_Z_mass__363->SetBinContent(7,55314);
   VbbHcc_algo_Z_mass__363->SetBinContent(8,66454);
   VbbHcc_algo_Z_mass__363->SetBinContent(9,71912);
   VbbHcc_algo_Z_mass__363->SetBinContent(10,73221);
   VbbHcc_algo_Z_mass__363->SetBinContent(11,73271);
   VbbHcc_algo_Z_mass__363->SetBinContent(12,73079);
   VbbHcc_algo_Z_mass__363->SetBinContent(13,72391);
   VbbHcc_algo_Z_mass__363->SetBinContent(14,72063);
   VbbHcc_algo_Z_mass__363->SetBinContent(15,70028);
   VbbHcc_algo_Z_mass__363->SetBinContent(16,66854);
   VbbHcc_algo_Z_mass__363->SetBinContent(17,62957);
   VbbHcc_algo_Z_mass__363->SetBinContent(18,59131);
   VbbHcc_algo_Z_mass__363->SetBinContent(19,55121);
   VbbHcc_algo_Z_mass__363->SetBinContent(20,51246);
   VbbHcc_algo_Z_mass__363->SetBinContent(21,46927);
   VbbHcc_algo_Z_mass__363->SetBinContent(22,43879);
   VbbHcc_algo_Z_mass__363->SetBinContent(23,41048);
   VbbHcc_algo_Z_mass__363->SetBinContent(24,37519);
   VbbHcc_algo_Z_mass__363->SetBinContent(25,34874);
   VbbHcc_algo_Z_mass__363->SetBinContent(26,32933);
   VbbHcc_algo_Z_mass__363->SetBinContent(27,30838);
   VbbHcc_algo_Z_mass__363->SetBinContent(28,28720);
   VbbHcc_algo_Z_mass__363->SetBinContent(29,27056);
   VbbHcc_algo_Z_mass__363->SetBinContent(30,25544);
   VbbHcc_algo_Z_mass__363->SetBinContent(31,23890);
   VbbHcc_algo_Z_mass__363->SetBinContent(32,22708);
   VbbHcc_algo_Z_mass__363->SetBinContent(33,21581);
   VbbHcc_algo_Z_mass__363->SetBinContent(34,20724);
   VbbHcc_algo_Z_mass__363->SetBinContent(35,19551);
   VbbHcc_algo_Z_mass__363->SetBinContent(36,18490);
   VbbHcc_algo_Z_mass__363->SetBinContent(37,17889);
   VbbHcc_algo_Z_mass__363->SetBinContent(38,16798);
   VbbHcc_algo_Z_mass__363->SetBinContent(39,16111);
   VbbHcc_algo_Z_mass__363->SetBinContent(40,15511);
   VbbHcc_algo_Z_mass__363->SetBinContent(41,585703);
   VbbHcc_algo_Z_mass__363->SetEntries(2097963);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_18->Modified();
   Z_mass_algo_18->cd();
   Z_mass_algo_18->SetSelected(Z_mass_algo_18);
}
