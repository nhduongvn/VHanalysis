#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_algoFirst_H_mass()
{
//=========Macro generated from canvas: VbbHcc_algoFirst_H_mass/VbbHcc_algoFirst_H_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_algoFirst_H_mass = new TCanvas("VbbHcc_algoFirst_H_mass", "VbbHcc_algoFirst_H_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_algoFirst_H_mass->SetHighLightColor(2);
   VbbHcc_algoFirst_H_mass->Range(-80,-31.89375,453.3333,287.0438);
   VbbHcc_algoFirst_H_mass->SetFillColor(0);
   VbbHcc_algoFirst_H_mass->SetBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetBorderSize(2);
   VbbHcc_algoFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_H_mass__18 = new TH1D("VbbHcc_algoFirst_H_mass__18","",40,0,400);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(4,4);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(5,31);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(6,131);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(7,212);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(8,224);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(9,233);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(10,243);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(11,215);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(12,215);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(13,196);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(14,185);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(15,198);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(16,185);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(17,177);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(18,182);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(19,160);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(20,144);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(21,168);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(22,158);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(23,143);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(24,124);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(25,129);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(26,127);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(27,122);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(28,120);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(29,121);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(30,114);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(31,105);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(32,92);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(33,99);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(34,105);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(35,104);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(36,98);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(37,89);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(38,116);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(39,91);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(40,90);
   VbbHcc_algoFirst_H_mass__18->SetBinContent(41,4230);
   VbbHcc_algoFirst_H_mass__18->SetEntries(9480);
   VbbHcc_algoFirst_H_mass__18->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_algoFirst_H_mass__18->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_H_mass__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__18->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__18->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_H_mass__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__18->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__18->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_algoFirst_H_mass->Modified();
   VbbHcc_algoFirst_H_mass->cd();
   VbbHcc_algoFirst_H_mass->SetSelected(VbbHcc_algoFirst_H_mass);
}
