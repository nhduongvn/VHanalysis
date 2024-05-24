#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_QCD_tagFirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_QCD_tagFirst_18/Z_dR_QCD_tagFirst_18
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_QCD_tagFirst_18 = new TCanvas("Z_dR_QCD_tagFirst_18", "Z_dR_QCD_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_QCD_tagFirst_18->SetHighLightColor(2);
   Z_dR_QCD_tagFirst_18->Range(-1.2,0.9772796,6.8,6.199193);
   Z_dR_QCD_tagFirst_18->SetFillColor(0);
   Z_dR_QCD_tagFirst_18->SetFillStyle(4000);
   Z_dR_QCD_tagFirst_18->SetBorderMode(0);
   Z_dR_QCD_tagFirst_18->SetBorderSize(2);
   Z_dR_QCD_tagFirst_18->SetLogy();
   Z_dR_QCD_tagFirst_18->SetLeftMargin(0.15);
   Z_dR_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_QCD_tagFirst_18->SetFrameBorderMode(0);
   Z_dR_QCD_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_QCD_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__129 = new TH1D("VH_tagFirst_Z_dR__129","",30,0,6);
   VH_tagFirst_Z_dR__129->SetBinContent(2,63.16857);
   VH_tagFirst_Z_dR__129->SetBinContent(3,250872.5);
   VH_tagFirst_Z_dR__129->SetBinContent(4,250176.9);
   VH_tagFirst_Z_dR__129->SetBinContent(5,185555.8);
   VH_tagFirst_Z_dR__129->SetBinContent(6,145690.1);
   VH_tagFirst_Z_dR__129->SetBinContent(7,121582.1);
   VH_tagFirst_Z_dR__129->SetBinContent(8,105935.5);
   VH_tagFirst_Z_dR__129->SetBinContent(9,99966.29);
   VH_tagFirst_Z_dR__129->SetBinContent(10,89614.85);
   VH_tagFirst_Z_dR__129->SetBinContent(11,104616.7);
   VH_tagFirst_Z_dR__129->SetBinContent(12,92324.53);
   VH_tagFirst_Z_dR__129->SetBinContent(13,89073.06);
   VH_tagFirst_Z_dR__129->SetBinContent(14,106650.8);
   VH_tagFirst_Z_dR__129->SetBinContent(15,115175.6);
   VH_tagFirst_Z_dR__129->SetBinContent(16,123858.3);
   VH_tagFirst_Z_dR__129->SetBinContent(17,106973);
   VH_tagFirst_Z_dR__129->SetBinContent(18,106859.3);
   VH_tagFirst_Z_dR__129->SetBinContent(19,76654.81);
   VH_tagFirst_Z_dR__129->SetBinContent(20,90503.08);
   VH_tagFirst_Z_dR__129->SetBinContent(21,71732.02);
   VH_tagFirst_Z_dR__129->SetBinContent(22,59945.64);
   VH_tagFirst_Z_dR__129->SetBinContent(23,49328.48);
   VH_tagFirst_Z_dR__129->SetBinContent(24,49531.18);
   VH_tagFirst_Z_dR__129->SetBinContent(25,49213.46);
   VH_tagFirst_Z_dR__129->SetBinContent(26,32561.93);
   VH_tagFirst_Z_dR__129->SetBinContent(27,28250.61);
   VH_tagFirst_Z_dR__129->SetBinContent(28,30598.18);
   VH_tagFirst_Z_dR__129->SetBinContent(29,29570.25);
   VH_tagFirst_Z_dR__129->SetBinContent(30,17033.62);
   VH_tagFirst_Z_dR__129->SetBinContent(31,16991.63);
   VH_tagFirst_Z_dR__129->SetBinError(2,30.79711);
   VH_tagFirst_Z_dR__129->SetBinError(3,9456.481);
   VH_tagFirst_Z_dR__129->SetBinError(4,10502.23);
   VH_tagFirst_Z_dR__129->SetBinError(5,12572.55);
   VH_tagFirst_Z_dR__129->SetBinError(6,7784.949);
   VH_tagFirst_Z_dR__129->SetBinError(7,7151.853);
   VH_tagFirst_Z_dR__129->SetBinError(8,6679.445);
   VH_tagFirst_Z_dR__129->SetBinError(9,6644.277);
   VH_tagFirst_Z_dR__129->SetBinError(10,7314.103);
   VH_tagFirst_Z_dR__129->SetBinError(11,15059.07);
   VH_tagFirst_Z_dR__129->SetBinError(12,7777.501);
   VH_tagFirst_Z_dR__129->SetBinError(13,5558.225);
   VH_tagFirst_Z_dR__129->SetBinError(14,8243.204);
   VH_tagFirst_Z_dR__129->SetBinError(15,7094.505);
   VH_tagFirst_Z_dR__129->SetBinError(16,13889.12);
   VH_tagFirst_Z_dR__129->SetBinError(17,7371.964);
   VH_tagFirst_Z_dR__129->SetBinError(18,8099.679);
   VH_tagFirst_Z_dR__129->SetBinError(19,5019.346);
   VH_tagFirst_Z_dR__129->SetBinError(20,6732.05);
   VH_tagFirst_Z_dR__129->SetBinError(21,6880.719);
   VH_tagFirst_Z_dR__129->SetBinError(22,5456.188);
   VH_tagFirst_Z_dR__129->SetBinError(23,4132.314);
   VH_tagFirst_Z_dR__129->SetBinError(24,8105.25);
   VH_tagFirst_Z_dR__129->SetBinError(25,19679.28);
   VH_tagFirst_Z_dR__129->SetBinError(26,3410.647);
   VH_tagFirst_Z_dR__129->SetBinError(27,4056.294);
   VH_tagFirst_Z_dR__129->SetBinError(28,4451.108);
   VH_tagFirst_Z_dR__129->SetBinError(29,3457.816);
   VH_tagFirst_Z_dR__129->SetBinError(30,1649.274);
   VH_tagFirst_Z_dR__129->SetBinError(31,3354.206);
   VH_tagFirst_Z_dR__129->SetEntries(100082);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__129->SetLineColor(ci);
   VH_tagFirst_Z_dR__129->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__129->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__129->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__129->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__129->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__129->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__129->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__129->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__129->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__129->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__129->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__129->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__129->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__129->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__129->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_QCD_tagFirst_18->Modified();
   Z_dR_QCD_tagFirst_18->cd();
   Z_dR_QCD_tagFirst_18->SetSelected(Z_dR_QCD_tagFirst_18);
}
