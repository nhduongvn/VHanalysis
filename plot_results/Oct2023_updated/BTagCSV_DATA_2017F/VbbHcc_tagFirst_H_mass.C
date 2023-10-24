#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_tagFirst_H_mass()
{
//=========Macro generated from canvas: VbbHcc_tagFirst_H_mass/VbbHcc_tagFirst_H_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_tagFirst_H_mass = new TCanvas("VbbHcc_tagFirst_H_mass", "VbbHcc_tagFirst_H_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_tagFirst_H_mass->SetHighLightColor(2);
   VbbHcc_tagFirst_H_mass->Range(-80,-2956.931,453.3333,26612.38);
   VbbHcc_tagFirst_H_mass->SetFillColor(0);
   VbbHcc_tagFirst_H_mass->SetBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetBorderSize(2);
   VbbHcc_tagFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_tagFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tagFirst_H_mass__28 = new TH1D("VbbHcc_tagFirst_H_mass__28","",40,0,400);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(3,317);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(4,3542);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(5,9691);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(6,15007);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(7,17792);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(8,19599);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(9,20724);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(10,20445);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(11,20318);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(12,20976);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(13,21731);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(14,22094);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(15,22529);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(16,21998);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(17,21640);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(18,21199);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(19,20676);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(20,20063);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(21,19349);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(22,18061);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(23,17349);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(24,16554);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(25,15497);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(26,15044);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(27,14281);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(28,13193);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(29,12345);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(30,11680);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(31,11045);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(32,10437);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(33,9760);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(34,9069);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(35,8666);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(36,8122);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(37,7750);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(38,7263);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(39,6864);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(40,6504);
   VbbHcc_tagFirst_H_mass__28->SetBinContent(41,133855);
   VbbHcc_tagFirst_H_mass__28->SetEntries(693029);
   VbbHcc_tagFirst_H_mass__28->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_tagFirst_H_mass__28->GetXaxis()->SetRange(1,400);
   VbbHcc_tagFirst_H_mass__28->GetXaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__28->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__28->GetXaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__28->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_tagFirst_H_mass__28->GetYaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__28->GetYaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__28->GetZaxis()->SetLabelFont(42);
   VbbHcc_tagFirst_H_mass__28->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tagFirst_H_mass__28->GetZaxis()->SetTitleFont(42);
   VbbHcc_tagFirst_H_mass__28->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_tagFirst_H_mass->Modified();
   VbbHcc_tagFirst_H_mass->cd();
   VbbHcc_tagFirst_H_mass->SetSelected(VbbHcc_tagFirst_H_mass);
}
