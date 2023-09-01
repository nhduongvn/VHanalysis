#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-4.147467,1.133333,37.3272);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__236 = new TH1D("VbbHcc_tags_Aplanarity__236","",50,0,1);
   VbbHcc_tags_Aplanarity__236->SetBinContent(1,31.59975);
   VbbHcc_tags_Aplanarity__236->SetBinContent(2,3.207193);
   VbbHcc_tags_Aplanarity__236->SetBinContent(3,0.738604);
   VbbHcc_tags_Aplanarity__236->SetBinContent(4,1.101915);
   VbbHcc_tags_Aplanarity__236->SetBinError(1,2.652908);
   VbbHcc_tags_Aplanarity__236->SetBinError(2,0.8410352);
   VbbHcc_tags_Aplanarity__236->SetBinError(3,0.3746407);
   VbbHcc_tags_Aplanarity__236->SetBinError(4,0.4989701);
   VbbHcc_tags_Aplanarity__236->SetEntries(173);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
