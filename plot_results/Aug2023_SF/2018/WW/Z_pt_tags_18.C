#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_18()
{
//=========Macro generated from canvas: Z_pt_tags_18/Z_pt_tags_18
//=========  (Fri Sep  1 13:34:41 2023) by ROOT version 6.28/04
   TCanvas *Z_pt_tags_18 = new TCanvas("Z_pt_tags_18", "Z_pt_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_tags_18->SetHighLightColor(2);
   Z_pt_tags_18->Range(-400,-0.2726925,2266.667,2.454233);
   Z_pt_tags_18->SetFillColor(0);
   Z_pt_tags_18->SetBorderMode(0);
   Z_pt_tags_18->SetBorderSize(2);
   Z_pt_tags_18->SetLeftMargin(0.15);
   Z_pt_tags_18->SetFrameBorderMode(0);
   Z_pt_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_pt__39 = new TH1D("VbbHcc_tags_Z_pt__39","",1000,0,2000);
   VbbHcc_tags_Z_pt__39->SetBinContent(72,0.6909771);
   VbbHcc_tags_Z_pt__39->SetBinContent(95,0.524235);
   VbbHcc_tags_Z_pt__39->SetBinContent(102,0.3810571);
   VbbHcc_tags_Z_pt__39->SetBinContent(107,2.077657);
   VbbHcc_tags_Z_pt__39->SetBinError(72,0.6909771);
   VbbHcc_tags_Z_pt__39->SetBinError(95,0.524235);
   VbbHcc_tags_Z_pt__39->SetBinError(102,0.3810571);
   VbbHcc_tags_Z_pt__39->SetBinError(107,2.077657);
   VbbHcc_tags_Z_pt__39->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_pt__39->SetFillColor(ci);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetRange(1,1000);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__39->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt__39->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt__39->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_tags_18->Modified();
   Z_pt_tags_18->cd();
   Z_pt_tags_18->SetSelected(Z_pt_tags_18);
}
