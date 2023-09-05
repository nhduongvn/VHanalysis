#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_tags_16()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Tue Sep  5 10:48:25 2023) by ROOT version 6.28/04
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-0.06574576,453.3333,0.5917118);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass__25 = new TH1D("VbbHcc_tags_H_mass__25","",40,0,400);
   VbbHcc_tags_H_mass__25->SetBinContent(5,0.08391191);
   VbbHcc_tags_H_mass__25->SetBinContent(6,0.06786106);
   VbbHcc_tags_H_mass__25->SetBinContent(7,0.165222);
   VbbHcc_tags_H_mass__25->SetBinContent(8,0.3085967);
   VbbHcc_tags_H_mass__25->SetBinContent(9,0.5009201);
   VbbHcc_tags_H_mass__25->SetBinContent(11,0.07912677);
   VbbHcc_tags_H_mass__25->SetBinContent(12,0.07985507);
   VbbHcc_tags_H_mass__25->SetBinContent(13,0.305859);
   VbbHcc_tags_H_mass__25->SetBinContent(14,0.0792178);
   VbbHcc_tags_H_mass__25->SetBinContent(18,0.07500666);
   VbbHcc_tags_H_mass__25->SetBinContent(19,0.08310132);
   VbbHcc_tags_H_mass__25->SetBinContent(20,0.1107902);
   VbbHcc_tags_H_mass__25->SetBinContent(22,0.1099732);
   VbbHcc_tags_H_mass__25->SetBinContent(27,0.1174079);
   VbbHcc_tags_H_mass__25->SetBinContent(29,0.08024226);
   VbbHcc_tags_H_mass__25->SetBinContent(30,0.2016135);
   VbbHcc_tags_H_mass__25->SetBinContent(41,2.146791);
   VbbHcc_tags_H_mass__25->SetBinError(5,0.08391191);
   VbbHcc_tags_H_mass__25->SetBinError(6,0.06786106);
   VbbHcc_tags_H_mass__25->SetBinError(7,0.1170432);
   VbbHcc_tags_H_mass__25->SetBinError(8,0.1790948);
   VbbHcc_tags_H_mass__25->SetBinError(9,0.2250606);
   VbbHcc_tags_H_mass__25->SetBinError(11,0.07912677);
   VbbHcc_tags_H_mass__25->SetBinError(12,0.07985507);
   VbbHcc_tags_H_mass__25->SetBinError(13,0.1792352);
   VbbHcc_tags_H_mass__25->SetBinError(14,0.0792178);
   VbbHcc_tags_H_mass__25->SetBinError(18,0.07500666);
   VbbHcc_tags_H_mass__25->SetBinError(19,0.08310132);
   VbbHcc_tags_H_mass__25->SetBinError(20,0.1107902);
   VbbHcc_tags_H_mass__25->SetBinError(22,0.1099732);
   VbbHcc_tags_H_mass__25->SetBinError(27,0.1174079);
   VbbHcc_tags_H_mass__25->SetBinError(29,0.08024226);
   VbbHcc_tags_H_mass__25->SetBinError(30,0.1433432);
   VbbHcc_tags_H_mass__25->SetBinError(41,0.4716167);
   VbbHcc_tags_H_mass__25->SetEntries(48);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
