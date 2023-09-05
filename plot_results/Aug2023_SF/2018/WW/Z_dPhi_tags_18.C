#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tags_18()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Tue Sep  5 10:48:07 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-0.2726925,4.533333,2.454233);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__99 = new TH1D("VbbHcc_tags_Z_dPhi__99","",120,0,4);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(0,0.3810571);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(12,0.6909771);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(14,2.077657);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(20,0.524235);
   VbbHcc_tags_Z_dPhi__99->SetBinError(0,0.3810571);
   VbbHcc_tags_Z_dPhi__99->SetBinError(12,0.6909771);
   VbbHcc_tags_Z_dPhi__99->SetBinError(14,2.077657);
   VbbHcc_tags_Z_dPhi__99->SetBinError(20,0.524235);
   VbbHcc_tags_Z_dPhi__99->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dPhi__99->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi__99->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi__99->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi__99->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__99->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__99->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__99->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__99->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__99->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__99->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__99->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__99->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_18->Modified();
   Z_dPhi_tags_18->cd();
   Z_dPhi_tags_18->SetSelected(Z_dPhi_tags_18);
}
