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
   Aplanarity_tags_18->Range(-0.2,-0.01220921,1.133333,0.1098829);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__240 = new TH1D("VbbHcc_tags_Aplanarity__240","",50,0,1);
   VbbHcc_tags_Aplanarity__240->SetBinContent(1,0.09302256);
   VbbHcc_tags_Aplanarity__240->SetBinContent(2,0.0103705);
   VbbHcc_tags_Aplanarity__240->SetBinContent(3,0.001652675);
   VbbHcc_tags_Aplanarity__240->SetBinContent(4,0.000818522);
   VbbHcc_tags_Aplanarity__240->SetBinContent(5,0.0007018874);
   VbbHcc_tags_Aplanarity__240->SetBinContent(8,0.0002560032);
   VbbHcc_tags_Aplanarity__240->SetBinError(1,0.006329337);
   VbbHcc_tags_Aplanarity__240->SetBinError(2,0.002134243);
   VbbHcc_tags_Aplanarity__240->SetBinError(3,0.0007523519);
   VbbHcc_tags_Aplanarity__240->SetBinError(4,0.0005944804);
   VbbHcc_tags_Aplanarity__240->SetBinError(5,0.0005054415);
   VbbHcc_tags_Aplanarity__240->SetBinError(8,0.0002560032);
   VbbHcc_tags_Aplanarity__240->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity__240->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__240->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__240->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__240->Draw("HIST");
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
