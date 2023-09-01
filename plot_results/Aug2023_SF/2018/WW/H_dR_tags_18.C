#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-0.2726925,6.8,2.454233);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__84 = new TH1D("VbbHcc_tags_H_dR__84","",30,0,6);
   VbbHcc_tags_H_dR__84->SetBinContent(4,0.524235);
   VbbHcc_tags_H_dR__84->SetBinContent(5,2.077657);
   VbbHcc_tags_H_dR__84->SetBinContent(13,0.3810571);
   VbbHcc_tags_H_dR__84->SetBinContent(18,0.6909771);
   VbbHcc_tags_H_dR__84->SetBinError(4,0.524235);
   VbbHcc_tags_H_dR__84->SetBinError(5,2.077657);
   VbbHcc_tags_H_dR__84->SetBinError(13,0.3810571);
   VbbHcc_tags_H_dR__84->SetBinError(18,0.6909771);
   VbbHcc_tags_H_dR__84->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR__84->SetFillColor(ci);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__84->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__84->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__84->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__84->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
