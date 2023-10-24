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
   VbbHcc_algoFirst_H_mass->Range(-80,-128.4938,453.3333,1156.444);
   VbbHcc_algoFirst_H_mass->SetFillColor(0);
   VbbHcc_algoFirst_H_mass->SetBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetBorderSize(2);
   VbbHcc_algoFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_H_mass__24 = new TH1D("VbbHcc_algoFirst_H_mass__24","",40,0,400);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(4,14);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(5,146);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(6,435);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(7,779);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(8,953);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(9,979);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(10,898);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(11,755);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(12,791);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(13,756);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(14,789);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(15,762);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(16,733);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(17,747);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(18,680);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(19,683);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(20,647);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(21,598);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(22,610);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(23,565);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(24,573);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(25,562);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(26,540);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(27,535);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(28,533);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(29,480);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(30,454);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(31,476);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(32,445);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(33,442);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(34,402);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(35,424);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(36,415);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(37,380);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(38,362);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(39,366);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(40,350);
   VbbHcc_algoFirst_H_mass__24->SetBinContent(41,17579);
   VbbHcc_algoFirst_H_mass__24->SetEntries(38638);
   VbbHcc_algoFirst_H_mass__24->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_algoFirst_H_mass__24->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_H_mass__24->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__24->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__24->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__24->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_H_mass__24->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__24->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__24->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__24->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__24->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__24->Draw("HIST");
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
