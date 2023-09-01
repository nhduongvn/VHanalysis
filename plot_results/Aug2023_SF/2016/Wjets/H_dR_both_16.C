#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-2.491388,6.8,22.42249);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__803 = new TH1D("VbbHcc_both_H_dR__803","",30,0,6);
   VbbHcc_both_H_dR__803->SetBinContent(3,8.664922);
   VbbHcc_both_H_dR__803->SetBinContent(4,9.082482);
   VbbHcc_both_H_dR__803->SetBinContent(5,11.4817);
   VbbHcc_both_H_dR__803->SetBinContent(6,4.948232);
   VbbHcc_both_H_dR__803->SetBinContent(7,8.13604);
   VbbHcc_both_H_dR__803->SetBinContent(8,5.988445);
   VbbHcc_both_H_dR__803->SetBinContent(9,8.41254);
   VbbHcc_both_H_dR__803->SetBinContent(10,6.191271);
   VbbHcc_both_H_dR__803->SetBinContent(11,11.21145);
   VbbHcc_both_H_dR__803->SetBinContent(12,9.730906);
   VbbHcc_both_H_dR__803->SetBinContent(13,13.363);
   VbbHcc_both_H_dR__803->SetBinContent(14,17.50973);
   VbbHcc_both_H_dR__803->SetBinContent(15,18.98201);
   VbbHcc_both_H_dR__803->SetBinContent(16,16.31871);
   VbbHcc_both_H_dR__803->SetBinContent(17,10.17661);
   VbbHcc_both_H_dR__803->SetBinContent(18,6.192192);
   VbbHcc_both_H_dR__803->SetBinContent(19,3.644588);
   VbbHcc_both_H_dR__803->SetBinContent(20,4.022769);
   VbbHcc_both_H_dR__803->SetBinContent(21,2.575565);
   VbbHcc_both_H_dR__803->SetBinContent(22,0.7879628);
   VbbHcc_both_H_dR__803->SetBinContent(23,0.4132602);
   VbbHcc_both_H_dR__803->SetBinContent(24,1.518165);
   VbbHcc_both_H_dR__803->SetBinContent(25,0.06241034);
   VbbHcc_both_H_dR__803->SetBinContent(26,0.000267282);
   VbbHcc_both_H_dR__803->SetBinError(3,1.274403);
   VbbHcc_both_H_dR__803->SetBinError(4,1.519679);
   VbbHcc_both_H_dR__803->SetBinError(5,4.380255);
   VbbHcc_both_H_dR__803->SetBinError(6,0.9112278);
   VbbHcc_both_H_dR__803->SetBinError(7,1.578792);
   VbbHcc_both_H_dR__803->SetBinError(8,0.8326033);
   VbbHcc_both_H_dR__803->SetBinError(9,1.795527);
   VbbHcc_both_H_dR__803->SetBinError(10,0.7419193);
   VbbHcc_both_H_dR__803->SetBinError(11,1.774808);
   VbbHcc_both_H_dR__803->SetBinError(12,1.432923);
   VbbHcc_both_H_dR__803->SetBinError(13,1.895851);
   VbbHcc_both_H_dR__803->SetBinError(14,4.919377);
   VbbHcc_both_H_dR__803->SetBinError(15,2.325945);
   VbbHcc_both_H_dR__803->SetBinError(16,2.186024);
   VbbHcc_both_H_dR__803->SetBinError(17,1.481437);
   VbbHcc_both_H_dR__803->SetBinError(18,1.132259);
   VbbHcc_both_H_dR__803->SetBinError(19,0.6218373);
   VbbHcc_both_H_dR__803->SetBinError(20,1.246024);
   VbbHcc_both_H_dR__803->SetBinError(21,0.983378);
   VbbHcc_both_H_dR__803->SetBinError(22,0.2442093);
   VbbHcc_both_H_dR__803->SetBinError(23,0.1797666);
   VbbHcc_both_H_dR__803->SetBinError(24,0.9188244);
   VbbHcc_both_H_dR__803->SetBinError(25,0.06241034);
   VbbHcc_both_H_dR__803->SetBinError(26,0.000267282);
   VbbHcc_both_H_dR__803->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_dR__803->SetFillColor(ci);
   VbbHcc_both_H_dR__803->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__803->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__803->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__803->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__803->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__803->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__803->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__803->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__803->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__803->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__803->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
