#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.2,-0.1186612,6.8,1.067951);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__189 = new TH1D("VbbHcc_tags_Z_dR_Bj0__189","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(3,0.9040853);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(1,0.4520427);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(3,0.6392849);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(8,0.4520427);
   VbbHcc_tags_Z_dR_Bj0__189->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_dR_Bj0__189->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj0__189->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__189->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__189->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__189->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__189->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__189->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
