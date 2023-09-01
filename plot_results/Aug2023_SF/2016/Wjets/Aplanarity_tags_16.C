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
   Aplanarity_tags_16->Range(-0.2,-19.4837,1.133333,175.3533);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity__233 = new TH1D("VbbHcc_tags_Aplanarity__233","",50,0,1);
   VbbHcc_tags_Aplanarity__233->SetBinContent(1,148.4472);
   VbbHcc_tags_Aplanarity__233->SetBinContent(2,13.81111);
   VbbHcc_tags_Aplanarity__233->SetBinContent(3,3.296742);
   VbbHcc_tags_Aplanarity__233->SetBinContent(4,0.938832);
   VbbHcc_tags_Aplanarity__233->SetBinContent(5,0.7807204);
   VbbHcc_tags_Aplanarity__233->SetBinContent(6,0.8929356);
   VbbHcc_tags_Aplanarity__233->SetBinContent(7,0.1801195);
   VbbHcc_tags_Aplanarity__233->SetBinContent(11,0.01206878);
   VbbHcc_tags_Aplanarity__233->SetBinError(1,8.632949);
   VbbHcc_tags_Aplanarity__233->SetBinError(2,1.97133);
   VbbHcc_tags_Aplanarity__233->SetBinError(3,1.204792);
   VbbHcc_tags_Aplanarity__233->SetBinError(4,0.2478868);
   VbbHcc_tags_Aplanarity__233->SetBinError(5,0.3172303);
   VbbHcc_tags_Aplanarity__233->SetBinError(6,0.6295834);
   VbbHcc_tags_Aplanarity__233->SetBinError(7,0.1308148);
   VbbHcc_tags_Aplanarity__233->SetBinError(11,0.008551371);
   VbbHcc_tags_Aplanarity__233->SetEntries(3416);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_tags_Aplanarity__233->SetFillColor(ci);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__233->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity__233->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity__233->Draw("HIST");
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
