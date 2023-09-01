#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_18()
{
//=========Macro generated from canvas: H_mass_tags_18/H_mass_tags_18
//=========  (Fri Sep  1 13:34:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_18 = new TCanvas("H_mass_tags_18", "H_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_18->SetHighLightColor(2);
   H_mass_tags_18->Range(-80,-0.7773942,453.3333,6.996547);
   H_mass_tags_18->SetFillColor(0);
   H_mass_tags_18->SetBorderMode(0);
   H_mass_tags_18->SetBorderSize(2);
   H_mass_tags_18->SetLeftMargin(0.15);
   H_mass_tags_18->SetFrameBorderMode(0);
   H_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__25 = new TH1D("VbbHcc_tags_H_mass__25","",40,0,400);
   VbbHcc_tags_H_mass__25->SetBinContent(8,0.5511003);
   VbbHcc_tags_H_mass__25->SetBinContent(9,5.923003);
   VbbHcc_tags_H_mass__25->SetBinContent(10,0.5183212);
   VbbHcc_tags_H_mass__25->SetBinContent(11,1.161787);
   VbbHcc_tags_H_mass__25->SetBinContent(12,0.5814054);
   VbbHcc_tags_H_mass__25->SetBinContent(13,0.7371838);
   VbbHcc_tags_H_mass__25->SetBinContent(16,2.21233);
   VbbHcc_tags_H_mass__25->SetBinContent(27,0.6143759);
   VbbHcc_tags_H_mass__25->SetBinContent(28,1.610355);
   VbbHcc_tags_H_mass__25->SetBinContent(36,0.6794818);
   VbbHcc_tags_H_mass__25->SetBinContent(41,5.834681);
   VbbHcc_tags_H_mass__25->SetBinError(8,0.5511003);
   VbbHcc_tags_H_mass__25->SetBinError(9,2.582271);
   VbbHcc_tags_H_mass__25->SetBinError(10,0.5183212);
   VbbHcc_tags_H_mass__25->SetBinError(11,0.8350841);
   VbbHcc_tags_H_mass__25->SetBinError(12,0.5814054);
   VbbHcc_tags_H_mass__25->SetBinError(13,0.7371838);
   VbbHcc_tags_H_mass__25->SetBinError(16,2.21233);
   VbbHcc_tags_H_mass__25->SetBinError(27,0.6143759);
   VbbHcc_tags_H_mass__25->SetBinError(28,1.610355);
   VbbHcc_tags_H_mass__25->SetBinError(36,0.6794818);
   VbbHcc_tags_H_mass__25->SetBinError(41,1.986989);
   VbbHcc_tags_H_mass__25->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass__25->SetFillColor(ci);
   VbbHcc_tags_H_mass__25->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass__25->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__25->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass__25->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_mass__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass__25->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_18->Modified();
   H_mass_tags_18->cd();
   H_mass_tags_18->SetSelected(H_mass_tags_18);
}
