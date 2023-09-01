#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_16()
{
//=========Macro generated from canvas: Sphericity_tags_16/Sphericity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_16 = new TCanvas("Sphericity_tags_16", "Sphericity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_16->SetHighLightColor(2);
   Sphericity_tags_16->Range(-0.2,-26.1376,1.133333,235.2384);
   Sphericity_tags_16->SetFillColor(0);
   Sphericity_tags_16->SetBorderMode(0);
   Sphericity_tags_16->SetBorderSize(2);
   Sphericity_tags_16->SetLeftMargin(0.15);
   Sphericity_tags_16->SetFrameBorderMode(0);
   Sphericity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__215 = new TH1D("VbbHcc_tags_Sphericity__215","",25,0,1);
   VbbHcc_tags_Sphericity__215->SetBinContent(1,199.1436);
   VbbHcc_tags_Sphericity__215->SetBinContent(2,151.9455);
   VbbHcc_tags_Sphericity__215->SetBinContent(3,89.55563);
   VbbHcc_tags_Sphericity__215->SetBinContent(4,56.57343);
   VbbHcc_tags_Sphericity__215->SetBinContent(5,30.22405);
   VbbHcc_tags_Sphericity__215->SetBinContent(6,17.62385);
   VbbHcc_tags_Sphericity__215->SetBinContent(7,11.52683);
   VbbHcc_tags_Sphericity__215->SetBinContent(8,6.083523);
   VbbHcc_tags_Sphericity__215->SetBinContent(9,5.517486);
   VbbHcc_tags_Sphericity__215->SetBinContent(10,2.661748);
   VbbHcc_tags_Sphericity__215->SetBinContent(11,1.504387);
   VbbHcc_tags_Sphericity__215->SetBinContent(12,1.128844);
   VbbHcc_tags_Sphericity__215->SetBinContent(13,1.16224);
   VbbHcc_tags_Sphericity__215->SetBinContent(14,1.119488);
   VbbHcc_tags_Sphericity__215->SetBinContent(15,1.164392);
   VbbHcc_tags_Sphericity__215->SetBinContent(16,0.266127);
   VbbHcc_tags_Sphericity__215->SetBinContent(17,0.4614613);
   VbbHcc_tags_Sphericity__215->SetBinContent(18,0.08171696);
   VbbHcc_tags_Sphericity__215->SetBinContent(19,0.1243346);
   VbbHcc_tags_Sphericity__215->SetBinError(1,5.549799);
   VbbHcc_tags_Sphericity__215->SetBinError(2,4.791402);
   VbbHcc_tags_Sphericity__215->SetBinError(3,3.721928);
   VbbHcc_tags_Sphericity__215->SetBinError(4,3.09128);
   VbbHcc_tags_Sphericity__215->SetBinError(5,2.170321);
   VbbHcc_tags_Sphericity__215->SetBinError(6,1.717189);
   VbbHcc_tags_Sphericity__215->SetBinError(7,1.314179);
   VbbHcc_tags_Sphericity__215->SetBinError(8,0.9216726);
   VbbHcc_tags_Sphericity__215->SetBinError(9,0.9104007);
   VbbHcc_tags_Sphericity__215->SetBinError(10,0.571861);
   VbbHcc_tags_Sphericity__215->SetBinError(11,0.5201329);
   VbbHcc_tags_Sphericity__215->SetBinError(12,0.3155235);
   VbbHcc_tags_Sphericity__215->SetBinError(13,0.3568473);
   VbbHcc_tags_Sphericity__215->SetBinError(14,0.3918913);
   VbbHcc_tags_Sphericity__215->SetBinError(15,0.4822246);
   VbbHcc_tags_Sphericity__215->SetBinError(16,0.2068693);
   VbbHcc_tags_Sphericity__215->SetBinError(17,0.2717684);
   VbbHcc_tags_Sphericity__215->SetBinError(18,0.05900741);
   VbbHcc_tags_Sphericity__215->SetBinError(19,0.0726346);
   VbbHcc_tags_Sphericity__215->SetEntries(9292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Sphericity__215->SetFillColor(ci);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__215->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__215->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__215->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_16->Modified();
   Sphericity_tags_16->cd();
   Sphericity_tags_16->SetSelected(Sphericity_tags_16);
}
