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
   VbbHcc_algoFirst_H_mass->Range(-80,-28.74375,453.3333,258.6938);
   VbbHcc_algoFirst_H_mass->SetFillColor(0);
   VbbHcc_algoFirst_H_mass->SetBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetBorderSize(2);
   VbbHcc_algoFirst_H_mass->SetLeftMargin(0.15);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   VbbHcc_algoFirst_H_mass->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algoFirst_H_mass__6 = new TH1D("VbbHcc_algoFirst_H_mass__6","",40,0,400);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(4,3);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(5,33);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(6,118);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(7,168);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(8,161);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(9,209);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(10,219);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(11,206);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(12,176);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(13,170);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(14,159);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(15,187);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(16,160);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(17,180);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(18,136);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(19,155);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(20,158);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(21,148);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(22,147);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(23,118);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(24,148);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(25,131);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(26,121);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(27,109);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(28,115);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(29,109);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(30,105);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(31,102);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(32,95);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(33,94);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(34,114);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(35,91);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(36,88);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(37,85);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(38,82);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(39,61);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(40,85);
   VbbHcc_algoFirst_H_mass__6->SetBinContent(41,3835);
   VbbHcc_algoFirst_H_mass__6->SetEntries(8581);
   VbbHcc_algoFirst_H_mass__6->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_algoFirst_H_mass__6->GetXaxis()->SetRange(1,400);
   VbbHcc_algoFirst_H_mass__6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__6->GetYaxis()->SetTitle("Events/10 GeV");
   VbbHcc_algoFirst_H_mass__6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algoFirst_H_mass__6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algoFirst_H_mass__6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algoFirst_H_mass__6->Draw("HIST");
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
