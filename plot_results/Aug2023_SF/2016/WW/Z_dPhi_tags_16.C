#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tags_16()
{
//=========Macro generated from canvas: Z_dPhi_tags_16/Z_dPhi_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_tags_16 = new TCanvas("Z_dPhi_tags_16", "Z_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_16->SetHighLightColor(2);
   Z_dPhi_tags_16->Range(-0.8,-0.01520228,4.533333,0.1368205);
   Z_dPhi_tags_16->SetFillColor(0);
   Z_dPhi_tags_16->SetBorderMode(0);
   Z_dPhi_tags_16->SetBorderSize(2);
   Z_dPhi_tags_16->SetLeftMargin(0.15);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   Z_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__99 = new TH1D("VbbHcc_tags_Z_dPhi__99","",120,0,4);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(0,0.8281394);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(13,0.1080661);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(20,0.103617);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(50,0.1005479);
   VbbHcc_tags_Z_dPhi__99->SetBinContent(58,0.1158269);
   VbbHcc_tags_Z_dPhi__99->SetBinError(0,0.3159783);
   VbbHcc_tags_Z_dPhi__99->SetBinError(13,0.1080661);
   VbbHcc_tags_Z_dPhi__99->SetBinError(20,0.103617);
   VbbHcc_tags_Z_dPhi__99->SetBinError(50,0.1005479);
   VbbHcc_tags_Z_dPhi__99->SetBinError(58,0.1158269);
   VbbHcc_tags_Z_dPhi__99->SetEntries(11);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_16->Modified();
   Z_dPhi_tags_16->cd();
   Z_dPhi_tags_16->SetSelected(Z_dPhi_tags_16);
}
