#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_tags_18()
{
//=========Macro generated from canvas: Sphericity_tags_18/Sphericity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Sphericity_tags_18 = new TCanvas("Sphericity_tags_18", "Sphericity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_18->SetHighLightColor(2);
   Sphericity_tags_18->Range(-0.2,-24.69331,1.133333,222.2398);
   Sphericity_tags_18->SetFillColor(0);
   Sphericity_tags_18->SetBorderMode(0);
   Sphericity_tags_18->SetBorderSize(2);
   Sphericity_tags_18->SetLeftMargin(0.15);
   Sphericity_tags_18->SetFrameBorderMode(0);
   Sphericity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity__218 = new TH1D("VbbHcc_tags_Sphericity__218","",25,0,1);
   VbbHcc_tags_Sphericity__218->SetBinContent(1,188.1395);
   VbbHcc_tags_Sphericity__218->SetBinContent(2,108.3659);
   VbbHcc_tags_Sphericity__218->SetBinContent(3,112.5461);
   VbbHcc_tags_Sphericity__218->SetBinContent(4,32.18427);
   VbbHcc_tags_Sphericity__218->SetBinContent(5,27.17802);
   VbbHcc_tags_Sphericity__218->SetBinContent(6,18.3286);
   VbbHcc_tags_Sphericity__218->SetBinContent(7,10.37484);
   VbbHcc_tags_Sphericity__218->SetBinContent(8,9.141095);
   VbbHcc_tags_Sphericity__218->SetBinContent(9,2.356347);
   VbbHcc_tags_Sphericity__218->SetBinContent(10,1.861211);
   VbbHcc_tags_Sphericity__218->SetBinContent(11,1.515155);
   VbbHcc_tags_Sphericity__218->SetBinContent(12,2.000734);
   VbbHcc_tags_Sphericity__218->SetBinContent(13,1.009518);
   VbbHcc_tags_Sphericity__218->SetBinContent(14,1.660097);
   VbbHcc_tags_Sphericity__218->SetBinContent(15,0.2733281);
   VbbHcc_tags_Sphericity__218->SetBinContent(16,1.084023);
   VbbHcc_tags_Sphericity__218->SetBinContent(17,0.7502656);
   VbbHcc_tags_Sphericity__218->SetBinError(1,17.55891);
   VbbHcc_tags_Sphericity__218->SetBinError(2,11.85037);
   VbbHcc_tags_Sphericity__218->SetBinError(3,27.75287);
   VbbHcc_tags_Sphericity__218->SetBinError(4,4.29675);
   VbbHcc_tags_Sphericity__218->SetBinError(5,6.16114);
   VbbHcc_tags_Sphericity__218->SetBinError(6,7.140937);
   VbbHcc_tags_Sphericity__218->SetBinError(7,2.481123);
   VbbHcc_tags_Sphericity__218->SetBinError(8,2.003338);
   VbbHcc_tags_Sphericity__218->SetBinError(9,0.7105865);
   VbbHcc_tags_Sphericity__218->SetBinError(10,0.8096275);
   VbbHcc_tags_Sphericity__218->SetBinError(11,0.6285166);
   VbbHcc_tags_Sphericity__218->SetBinError(12,0.7236469);
   VbbHcc_tags_Sphericity__218->SetBinError(13,0.3462563);
   VbbHcc_tags_Sphericity__218->SetBinError(14,0.6719931);
   VbbHcc_tags_Sphericity__218->SetBinError(15,0.1490352);
   VbbHcc_tags_Sphericity__218->SetBinError(16,0.4725595);
   VbbHcc_tags_Sphericity__218->SetBinError(17,0.5473371);
   VbbHcc_tags_Sphericity__218->SetEntries(2245);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Sphericity__218->SetFillColor(ci);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__218->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Sphericity__218->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity__218->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_18->Modified();
   Sphericity_tags_18->cd();
   Sphericity_tags_18->SetSelected(Sphericity_tags_18);
}
