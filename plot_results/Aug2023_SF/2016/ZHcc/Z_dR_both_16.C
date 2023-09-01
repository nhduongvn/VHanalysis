#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.001923693,6.8,0.01731324);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__794 = new TH1D("VbbHcc_both_Z_dR__794","",30,0,6);
   VbbHcc_both_Z_dR__794->SetBinContent(3,0.006967735);
   VbbHcc_both_Z_dR__794->SetBinContent(4,0.01465671);
   VbbHcc_both_Z_dR__794->SetBinContent(5,0.005029907);
   VbbHcc_both_Z_dR__794->SetBinContent(6,0.01196228);
   VbbHcc_both_Z_dR__794->SetBinContent(9,0.002996246);
   VbbHcc_both_Z_dR__794->SetBinContent(10,0.001871144);
   VbbHcc_both_Z_dR__794->SetBinContent(11,0.006502948);
   VbbHcc_both_Z_dR__794->SetBinContent(13,0.00269847);
   VbbHcc_both_Z_dR__794->SetBinContent(14,0.002370096);
   VbbHcc_both_Z_dR__794->SetBinContent(15,0.00204855);
   VbbHcc_both_Z_dR__794->SetBinContent(16,0.001425773);
   VbbHcc_both_Z_dR__794->SetBinContent(17,0.003762308);
   VbbHcc_both_Z_dR__794->SetBinContent(18,0.004346626);
   VbbHcc_both_Z_dR__794->SetBinContent(19,0.001943164);
   VbbHcc_both_Z_dR__794->SetBinContent(23,0.001516135);
   VbbHcc_both_Z_dR__794->SetBinContent(29,0.009262946);
   VbbHcc_both_Z_dR__794->SetBinError(3,0.004023021);
   VbbHcc_both_Z_dR__794->SetBinError(4,0.005558168);
   VbbHcc_both_Z_dR__794->SetBinError(5,0.003685117);
   VbbHcc_both_Z_dR__794->SetBinError(6,0.005444615);
   VbbHcc_both_Z_dR__794->SetBinError(9,0.002996246);
   VbbHcc_both_Z_dR__794->SetBinError(10,0.001871144);
   VbbHcc_both_Z_dR__794->SetBinError(11,0.003815584);
   VbbHcc_both_Z_dR__794->SetBinError(13,0.00269847);
   VbbHcc_both_Z_dR__794->SetBinError(14,0.002370096);
   VbbHcc_both_Z_dR__794->SetBinError(15,0.00204855);
   VbbHcc_both_Z_dR__794->SetBinError(16,0.001425773);
   VbbHcc_both_Z_dR__794->SetBinError(17,0.002705336);
   VbbHcc_both_Z_dR__794->SetBinError(18,0.003124467);
   VbbHcc_both_Z_dR__794->SetBinError(19,0.001943164);
   VbbHcc_both_Z_dR__794->SetBinError(23,0.001516135);
   VbbHcc_both_Z_dR__794->SetBinError(29,0.004656152);
   VbbHcc_both_Z_dR__794->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR__794->SetFillColor(ci);
   VbbHcc_both_Z_dR__794->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__794->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__794->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__794->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__794->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__794->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__794->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__794->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__794->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__794->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__794->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
