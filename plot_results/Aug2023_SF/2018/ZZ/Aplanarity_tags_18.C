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
   Aplanarity_tags_18->Range(-0.2,-10.01399,1.133333,90.12592);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__236 = new TH1D("VbbHcc_tags_Aplanarity__236","",50,0,1);
   VbbHcc_tags_Aplanarity__236->SetBinContent(1,76.29707);
   VbbHcc_tags_Aplanarity__236->SetBinContent(2,3.469896);
   VbbHcc_tags_Aplanarity__236->SetBinContent(3,0.349003);
   VbbHcc_tags_Aplanarity__236->SetBinContent(4,0.6700941);
   VbbHcc_tags_Aplanarity__236->SetBinContent(6,0.8210679);
   VbbHcc_tags_Aplanarity__236->SetBinContent(12,0.4163885);
   VbbHcc_tags_Aplanarity__236->SetBinError(1,5.599832);
   VbbHcc_tags_Aplanarity__236->SetBinError(2,1.127794);
   VbbHcc_tags_Aplanarity__236->SetBinError(3,0.349003);
   VbbHcc_tags_Aplanarity__236->SetBinError(4,0.4948273);
   VbbHcc_tags_Aplanarity__236->SetBinError(6,0.8210679);
   VbbHcc_tags_Aplanarity__236->SetBinError(12,0.4163885);
   VbbHcc_tags_Aplanarity__236->SetEntries(230);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Aplanarity__236->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__236->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__236->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__236->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__236->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__236->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__236->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__236->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__236->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__236->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__236->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__236->Draw("HIST");
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
