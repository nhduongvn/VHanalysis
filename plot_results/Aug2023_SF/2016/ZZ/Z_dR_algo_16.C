#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Sep  1 13:23:36 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.2,-2.17983,6.8,19.61847);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR__431 = new TH1D("VbbHcc_algo_Z_dR__431","",30,0,6);
   VbbHcc_algo_Z_dR__431->SetBinContent(3,11.08415);
   VbbHcc_algo_Z_dR__431->SetBinContent(4,16.60823);
   VbbHcc_algo_Z_dR__431->SetBinContent(5,15.19697);
   VbbHcc_algo_Z_dR__431->SetBinContent(6,11.04003);
   VbbHcc_algo_Z_dR__431->SetBinContent(7,8.829413);
   VbbHcc_algo_Z_dR__431->SetBinContent(8,6.594115);
   VbbHcc_algo_Z_dR__431->SetBinContent(9,3.831234);
   VbbHcc_algo_Z_dR__431->SetBinContent(10,6.060363);
   VbbHcc_algo_Z_dR__431->SetBinContent(11,5.159991);
   VbbHcc_algo_Z_dR__431->SetBinContent(12,4.962514);
   VbbHcc_algo_Z_dR__431->SetBinContent(13,5.506297);
   VbbHcc_algo_Z_dR__431->SetBinContent(14,5.347338);
   VbbHcc_algo_Z_dR__431->SetBinContent(15,4.827131);
   VbbHcc_algo_Z_dR__431->SetBinContent(16,4.290048);
   VbbHcc_algo_Z_dR__431->SetBinContent(17,2.609211);
   VbbHcc_algo_Z_dR__431->SetBinContent(18,2.40753);
   VbbHcc_algo_Z_dR__431->SetBinContent(19,2.906881);
   VbbHcc_algo_Z_dR__431->SetBinContent(20,3.373862);
   VbbHcc_algo_Z_dR__431->SetBinContent(21,1.972057);
   VbbHcc_algo_Z_dR__431->SetBinContent(22,1.530105);
   VbbHcc_algo_Z_dR__431->SetBinContent(23,1.457451);
   VbbHcc_algo_Z_dR__431->SetBinContent(24,1.067597);
   VbbHcc_algo_Z_dR__431->SetBinContent(25,0.9357603);
   VbbHcc_algo_Z_dR__431->SetBinContent(26,0.5263355);
   VbbHcc_algo_Z_dR__431->SetBinContent(27,1.794415);
   VbbHcc_algo_Z_dR__431->SetBinContent(28,1.136686);
   VbbHcc_algo_Z_dR__431->SetBinContent(29,2.260583);
   VbbHcc_algo_Z_dR__431->SetBinContent(30,0.5499511);
   VbbHcc_algo_Z_dR__431->SetBinContent(31,0.3699677);
   VbbHcc_algo_Z_dR__431->SetBinError(3,1.566113);
   VbbHcc_algo_Z_dR__431->SetBinError(4,1.907179);
   VbbHcc_algo_Z_dR__431->SetBinError(5,1.814335);
   VbbHcc_algo_Z_dR__431->SetBinError(6,1.523671);
   VbbHcc_algo_Z_dR__431->SetBinError(7,1.306887);
   VbbHcc_algo_Z_dR__431->SetBinError(8,1.19842);
   VbbHcc_algo_Z_dR__431->SetBinError(9,0.9332418);
   VbbHcc_algo_Z_dR__431->SetBinError(10,1.171379);
   VbbHcc_algo_Z_dR__431->SetBinError(11,1.053699);
   VbbHcc_algo_Z_dR__431->SetBinError(12,1.008051);
   VbbHcc_algo_Z_dR__431->SetBinError(13,1.045444);
   VbbHcc_algo_Z_dR__431->SetBinError(14,1.043085);
   VbbHcc_algo_Z_dR__431->SetBinError(15,0.977777);
   VbbHcc_algo_Z_dR__431->SetBinError(16,0.9471049);
   VbbHcc_algo_Z_dR__431->SetBinError(17,0.7348894);
   VbbHcc_algo_Z_dR__431->SetBinError(18,0.7044377);
   VbbHcc_algo_Z_dR__431->SetBinError(19,0.7835182);
   VbbHcc_algo_Z_dR__431->SetBinError(20,0.8496112);
   VbbHcc_algo_Z_dR__431->SetBinError(21,0.6162546);
   VbbHcc_algo_Z_dR__431->SetBinError(22,0.5153572);
   VbbHcc_algo_Z_dR__431->SetBinError(23,0.5228939);
   VbbHcc_algo_Z_dR__431->SetBinError(24,0.4798614);
   VbbHcc_algo_Z_dR__431->SetBinError(25,0.421753);
   VbbHcc_algo_Z_dR__431->SetBinError(26,0.3062941);
   VbbHcc_algo_Z_dR__431->SetBinError(27,0.5928379);
   VbbHcc_algo_Z_dR__431->SetBinError(28,0.469183);
   VbbHcc_algo_Z_dR__431->SetBinError(29,0.6905151);
   VbbHcc_algo_Z_dR__431->SetBinError(30,0.3203737);
   VbbHcc_algo_Z_dR__431->SetBinError(31,0.2706553);
   VbbHcc_algo_Z_dR__431->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_dR__431->SetFillColor(ci);
   VbbHcc_algo_Z_dR__431->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR__431->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR__431->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__431->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__431->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__431->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__431->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__431->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__431->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__431->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__431->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
