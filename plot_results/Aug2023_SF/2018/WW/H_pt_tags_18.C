#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_pt_tags_18()
{
//=========Macro generated from canvas: H_pt_tags_18/H_pt_tags_18
//=========  (Tue Sep  5 10:48:06 2023) by ROOT version 6.28/04
   TCanvas *H_pt_tags_18 = new TCanvas("H_pt_tags_18", "H_pt_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_tags_18->SetHighLightColor(2);
   H_pt_tags_18->Range(-400,-0.3414984,2266.667,3.073485);
   H_pt_tags_18->SetFillColor(0);
   H_pt_tags_18->SetBorderMode(0);
   H_pt_tags_18->SetBorderSize(2);
   H_pt_tags_18->SetLeftMargin(0.15);
   H_pt_tags_18->SetFrameBorderMode(0);
   H_pt_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_pt__54 = new TH1D("VbbHcc_tags_H_pt__54","",1000,0,2000);
   VbbHcc_tags_H_pt__54->SetBinContent(89,2.601892);
   VbbHcc_tags_H_pt__54->SetBinContent(90,0.6909771);
   VbbHcc_tags_H_pt__54->SetBinContent(116,0.3810571);
   VbbHcc_tags_H_pt__54->SetBinError(89,2.142774);
   VbbHcc_tags_H_pt__54->SetBinError(90,0.6909771);
   VbbHcc_tags_H_pt__54->SetBinError(116,0.3810571);
   VbbHcc_tags_H_pt__54->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_pt__54->SetFillColor(ci);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_tags_H_pt__54->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__54->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_pt__54->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_pt__54->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_tags_18->Modified();
   H_pt_tags_18->cd();
   H_pt_tags_18->SetSelected(H_pt_tags_18);
}
