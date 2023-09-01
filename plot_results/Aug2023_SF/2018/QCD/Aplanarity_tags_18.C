#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-33253.85,1.133333,299284.7);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__229 = new TH1D("VbbHcc_tags_Aplanarity__229","",50,0,1);
   VbbHcc_tags_Aplanarity__229->SetBinContent(1,253362.7);
   VbbHcc_tags_Aplanarity__229->SetBinContent(2,23066.97);
   VbbHcc_tags_Aplanarity__229->SetBinContent(3,10310.86);
   VbbHcc_tags_Aplanarity__229->SetBinContent(4,3799.265);
   VbbHcc_tags_Aplanarity__229->SetBinContent(5,1546.159);
   VbbHcc_tags_Aplanarity__229->SetBinContent(6,433.2068);
   VbbHcc_tags_Aplanarity__229->SetBinContent(7,185.0541);
   VbbHcc_tags_Aplanarity__229->SetBinContent(8,38.36869);
   VbbHcc_tags_Aplanarity__229->SetBinContent(9,121.6543);
   VbbHcc_tags_Aplanarity__229->SetBinContent(10,39.47564);
   VbbHcc_tags_Aplanarity__229->SetBinContent(11,7.790419);
   VbbHcc_tags_Aplanarity__229->SetBinContent(15,39.61843);
   VbbHcc_tags_Aplanarity__229->SetBinError(1,15216.11);
   VbbHcc_tags_Aplanarity__229->SetBinError(2,2358.77);
   VbbHcc_tags_Aplanarity__229->SetBinError(3,1809.492);
   VbbHcc_tags_Aplanarity__229->SetBinError(4,1122.011);
   VbbHcc_tags_Aplanarity__229->SetBinError(5,634.4333);
   VbbHcc_tags_Aplanarity__229->SetBinError(6,136.3247);
   VbbHcc_tags_Aplanarity__229->SetBinError(7,84.08986);
   VbbHcc_tags_Aplanarity__229->SetBinError(8,17.11253);
   VbbHcc_tags_Aplanarity__229->SetBinError(9,79.18253);
   VbbHcc_tags_Aplanarity__229->SetBinError(10,31.24163);
   VbbHcc_tags_Aplanarity__229->SetBinError(11,7.790419);
   VbbHcc_tags_Aplanarity__229->SetBinError(15,39.61843);
   VbbHcc_tags_Aplanarity__229->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity__229->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__229->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__229->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__229->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
