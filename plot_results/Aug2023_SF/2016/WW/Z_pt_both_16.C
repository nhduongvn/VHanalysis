#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_16()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(-400,-0.01846816,2266.667,0.1662135);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLeftMargin(0.15);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_pt__759 = new TH1D("VbbHcc_both_Z_pt__759","",1000,0,2000);
   VbbHcc_both_Z_pt__759->SetBinContent(35,0.1336153);
   VbbHcc_both_Z_pt__759->SetBinContent(53,0.103617);
   VbbHcc_both_Z_pt__759->SetBinContent(54,0.1005479);
   VbbHcc_both_Z_pt__759->SetBinContent(56,0.1407098);
   VbbHcc_both_Z_pt__759->SetBinContent(78,0.1158269);
   VbbHcc_both_Z_pt__759->SetBinContent(81,0.09694687);
   VbbHcc_both_Z_pt__759->SetBinContent(90,0.1336795);
   VbbHcc_both_Z_pt__759->SetBinContent(112,0.1081721);
   VbbHcc_both_Z_pt__759->SetBinContent(126,0.1147185);
   VbbHcc_both_Z_pt__759->SetBinContent(160,0.1002972);
   VbbHcc_both_Z_pt__759->SetBinContent(172,0.1080661);
   VbbHcc_both_Z_pt__759->SetBinError(35,0.1336153);
   VbbHcc_both_Z_pt__759->SetBinError(53,0.103617);
   VbbHcc_both_Z_pt__759->SetBinError(54,0.1005479);
   VbbHcc_both_Z_pt__759->SetBinError(56,0.1407098);
   VbbHcc_both_Z_pt__759->SetBinError(78,0.1158269);
   VbbHcc_both_Z_pt__759->SetBinError(81,0.09694687);
   VbbHcc_both_Z_pt__759->SetBinError(90,0.1336795);
   VbbHcc_both_Z_pt__759->SetBinError(112,0.1081721);
   VbbHcc_both_Z_pt__759->SetBinError(126,0.1147185);
   VbbHcc_both_Z_pt__759->SetBinError(160,0.1002972);
   VbbHcc_both_Z_pt__759->SetBinError(172,0.1080661);
   VbbHcc_both_Z_pt__759->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_pt__759->SetFillColor(ci);
   VbbHcc_both_Z_pt__759->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   VbbHcc_both_Z_pt__759->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_Z_pt__759->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt__759->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt__759->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt__759->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt__759->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt__759->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt__759->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt__759->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt__759->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
