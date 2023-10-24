#ifdef __CLING__
#pragma cling optimize(0)
#endif
void VbbHcc_algoFirst_Z_mass()
{
//=========Macro generated from canvas: VbbHcc_algoFirst_Z_mass/VbbHcc_algoFirst_Z_mass
//=========  (Mon Oct 23 15:09:43 2023) by ROOT version 6.28/04
   TCanvas *VbbHcc_algoFirst_Z_mass = new TCanvas("VbbHcc_algoFirst_Z_mass", "VbbHcc_algoFirst_Z_mass",0,0,600,600);
   gStyle->SetOptStat(0);
   VbbHcc_algoFirst_Z_mass->SetHighLightColor(2);
   VbbHcc_algoFirst_Z_mass->Range(-80,-60.24375,453.3333,542.1938);
   VbbHcc_algoFirst_Z_mass->SetFillColor(0);
   VbbHcc_algoFirst_Z_mass->SetBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetBorderSize(2);
   VbbHcc_algoFirst_Z_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_Z_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_Z_mass__5 = new TH1D("VbbHcc_algoFirst_Z_mass__5","",40,0,400);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(4,22);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(5,188);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(6,339);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(7,428);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(8,459);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(9,455);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(10,400);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(11,388);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(12,384);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(13,341);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(14,307);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(15,297);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(16,244);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(17,228);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(18,215);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(19,212);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(20,172);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(21,163);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(22,156);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(23,141);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(24,120);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(25,100);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(26,99);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(27,93);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(28,86);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(29,77);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(30,61);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(31,88);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(32,91);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(33,78);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(34,53);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(35,59);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(36,48);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(37,61);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(38,41);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(39,57);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(40,37);
   VbbHcc_algoFirst_Z_mass__5->SetBinContent(41,1793);
   VbbHcc_algoFirst_Z_mass__5->SetEntries(8581);
   VbbHcc_algoFirst_Z_mass__5->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_algoFirst_Z_mass__5->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_Z_mass__5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__5->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__5->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_Z_mass__5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_Z_mass__5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_Z_mass__5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_Z_mass__5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV,  fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   VbbHcc_algoFirst_Z_mass->Modified();
   VbbHcc_algoFirst_Z_mass->cd();
   VbbHcc_algoFirst_Z_mass->SetSelected(VbbHcc_algoFirst_Z_mass);
}
