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
   Z_dR_both_16->Range(-1.2,-0.0787241,6.8,0.7085169);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__790 = new TH1D("VbbHcc_both_Z_dR__790","",30,0,6);
   VbbHcc_both_Z_dR__790->SetBinContent(3,0.5998026);
   VbbHcc_both_Z_dR__790->SetBinContent(4,0.574821);
   VbbHcc_both_Z_dR__790->SetBinContent(5,0.2782093);
   VbbHcc_both_Z_dR__790->SetBinContent(6,0.1970642);
   VbbHcc_both_Z_dR__790->SetBinContent(7,0.0849636);
   VbbHcc_both_Z_dR__790->SetBinContent(8,0.07675085);
   VbbHcc_both_Z_dR__790->SetBinContent(9,0.1789746);
   VbbHcc_both_Z_dR__790->SetBinContent(10,0.1633844);
   VbbHcc_both_Z_dR__790->SetBinContent(11,0.1542399);
   VbbHcc_both_Z_dR__790->SetBinContent(13,0.3484575);
   VbbHcc_both_Z_dR__790->SetBinContent(14,0.3384729);
   VbbHcc_both_Z_dR__790->SetBinContent(15,0.4824465);
   VbbHcc_both_Z_dR__790->SetBinContent(16,0.1962831);
   VbbHcc_both_Z_dR__790->SetBinContent(17,0.2828612);
   VbbHcc_both_Z_dR__790->SetBinContent(18,0.1159892);
   VbbHcc_both_Z_dR__790->SetBinContent(19,0.09024115);
   VbbHcc_both_Z_dR__790->SetBinContent(21,0.08802072);
   VbbHcc_both_Z_dR__790->SetBinContent(22,0.1698691);
   VbbHcc_both_Z_dR__790->SetBinContent(24,0.2588057);
   VbbHcc_both_Z_dR__790->SetBinContent(25,0.1107902);
   VbbHcc_both_Z_dR__790->SetBinContent(29,0.09930289);
   VbbHcc_both_Z_dR__790->SetBinError(3,0.25225);
   VbbHcc_both_Z_dR__790->SetBinError(4,0.2381882);
   VbbHcc_both_Z_dR__790->SetBinError(5,0.1622243);
   VbbHcc_both_Z_dR__790->SetBinError(6,0.1405236);
   VbbHcc_both_Z_dR__790->SetBinError(7,0.0849636);
   VbbHcc_both_Z_dR__790->SetBinError(8,0.07675085);
   VbbHcc_both_Z_dR__790->SetBinError(9,0.1297829);
   VbbHcc_both_Z_dR__790->SetBinError(10,0.1155729);
   VbbHcc_both_Z_dR__790->SetBinError(11,0.1099493);
   VbbHcc_both_Z_dR__790->SetBinError(13,0.180362);
   VbbHcc_both_Z_dR__790->SetBinError(14,0.1785854);
   VbbHcc_both_Z_dR__790->SetBinError(15,0.2434494);
   VbbHcc_both_Z_dR__790->SetBinError(16,0.1414423);
   VbbHcc_both_Z_dR__790->SetBinError(17,0.1633164);
   VbbHcc_both_Z_dR__790->SetBinError(18,0.1159892);
   VbbHcc_both_Z_dR__790->SetBinError(19,0.09024115);
   VbbHcc_both_Z_dR__790->SetBinError(21,0.08802072);
   VbbHcc_both_Z_dR__790->SetBinError(22,0.1252263);
   VbbHcc_both_Z_dR__790->SetBinError(24,0.1498208);
   VbbHcc_both_Z_dR__790->SetBinError(25,0.1107902);
   VbbHcc_both_Z_dR__790->SetBinError(29,0.09930289);
   VbbHcc_both_Z_dR__790->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR__790->SetFillColor(ci);
   VbbHcc_both_Z_dR__790->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__790->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__790->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__790->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__790->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__790->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__790->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__790->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__790->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__790->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__790->Draw("HIST");
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
