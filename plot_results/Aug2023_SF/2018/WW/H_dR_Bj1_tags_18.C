#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_18/H_dR_Bj1_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_tags_18 = new TCanvas("H_dR_Bj1_tags_18", "H_dR_Bj1_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_18->SetHighLightColor(2);
   H_dR_Bj1_tags_18->Range(-1.2,-0.1186612,6.8,1.067951);
   H_dR_Bj1_tags_18->SetFillColor(0);
   H_dR_Bj1_tags_18->SetBorderMode(0);
   H_dR_Bj1_tags_18->SetBorderSize(2);
   H_dR_Bj1_tags_18->SetLeftMargin(0.15);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   H_dR_Bj1_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1__174 = new TH1D("VbbHcc_tags_H_dR_Bj1__174","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__174->SetBinContent(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1__174->SetBinContent(3,0.9040853);
   VbbHcc_tags_H_dR_Bj1__174->SetBinContent(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1__174->SetBinError(2,0.4520427);
   VbbHcc_tags_H_dR_Bj1__174->SetBinError(3,0.6392849);
   VbbHcc_tags_H_dR_Bj1__174->SetBinError(12,0.4520427);
   VbbHcc_tags_H_dR_Bj1__174->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_dR_Bj1__174->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj1__174->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1__174->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1__174->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__174->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__174->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__174->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__174->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__174->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__174->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__174->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__174->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_18->Modified();
   H_dR_Bj1_tags_18->cd();
   H_dR_Bj1_tags_18->SetSelected(H_dR_Bj1_tags_18);
}
