#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.2,-0.03527194,6.8,0.3174475);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__189 = new TH1D("VbbHcc_tags_Z_dR_Bj0__189","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(7,0.2687386);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinContent(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(1,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(2,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(6,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(7,0.1900269);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(8,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(11,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(13,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(14,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(19,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetBinError(21,0.1343693);
   VbbHcc_tags_Z_dR_Bj0__189->SetEntries(11);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
