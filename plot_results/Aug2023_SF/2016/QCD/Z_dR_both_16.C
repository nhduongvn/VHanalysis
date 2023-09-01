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
   Z_dR_both_16->Range(-1.2,-1671.73,6.8,15045.57);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__784 = new TH1D("VbbHcc_both_Z_dR__784","",30,0,6);
   VbbHcc_both_Z_dR__784->SetBinContent(3,12639.33);
   VbbHcc_both_Z_dR__784->SetBinContent(4,12736.99);
   VbbHcc_both_Z_dR__784->SetBinContent(5,8718.247);
   VbbHcc_both_Z_dR__784->SetBinContent(6,9126.686);
   VbbHcc_both_Z_dR__784->SetBinContent(7,6153.626);
   VbbHcc_both_Z_dR__784->SetBinContent(8,6070.531);
   VbbHcc_both_Z_dR__784->SetBinContent(9,4624.782);
   VbbHcc_both_Z_dR__784->SetBinContent(10,3698.807);
   VbbHcc_both_Z_dR__784->SetBinContent(11,7744.094);
   VbbHcc_both_Z_dR__784->SetBinContent(12,5565.121);
   VbbHcc_both_Z_dR__784->SetBinContent(13,5165.616);
   VbbHcc_both_Z_dR__784->SetBinContent(14,6109.8);
   VbbHcc_both_Z_dR__784->SetBinContent(15,9242.796);
   VbbHcc_both_Z_dR__784->SetBinContent(16,8829.991);
   VbbHcc_both_Z_dR__784->SetBinContent(17,7386.403);
   VbbHcc_both_Z_dR__784->SetBinContent(18,4601.924);
   VbbHcc_both_Z_dR__784->SetBinContent(19,3859.553);
   VbbHcc_both_Z_dR__784->SetBinContent(20,4656.509);
   VbbHcc_both_Z_dR__784->SetBinContent(21,3155.757);
   VbbHcc_both_Z_dR__784->SetBinContent(22,3248.356);
   VbbHcc_both_Z_dR__784->SetBinContent(23,3979.47);
   VbbHcc_both_Z_dR__784->SetBinContent(24,781.4224);
   VbbHcc_both_Z_dR__784->SetBinContent(25,2292.195);
   VbbHcc_both_Z_dR__784->SetBinContent(26,1598.729);
   VbbHcc_both_Z_dR__784->SetBinContent(27,1759.577);
   VbbHcc_both_Z_dR__784->SetBinContent(28,1210.554);
   VbbHcc_both_Z_dR__784->SetBinContent(29,758.718);
   VbbHcc_both_Z_dR__784->SetBinContent(30,640.9216);
   VbbHcc_both_Z_dR__784->SetBinContent(31,450.3615);
   VbbHcc_both_Z_dR__784->SetBinError(3,1412.183);
   VbbHcc_both_Z_dR__784->SetBinError(4,1676.809);
   VbbHcc_both_Z_dR__784->SetBinError(5,1442.71);
   VbbHcc_both_Z_dR__784->SetBinError(6,1668.408);
   VbbHcc_both_Z_dR__784->SetBinError(7,914.9992);
   VbbHcc_both_Z_dR__784->SetBinError(8,1278.054);
   VbbHcc_both_Z_dR__784->SetBinError(9,771.1673);
   VbbHcc_both_Z_dR__784->SetBinError(10,561.9615);
   VbbHcc_both_Z_dR__784->SetBinError(11,1989.398);
   VbbHcc_both_Z_dR__784->SetBinError(12,909.9481);
   VbbHcc_both_Z_dR__784->SetBinError(13,788.9336);
   VbbHcc_both_Z_dR__784->SetBinError(14,1444.303);
   VbbHcc_both_Z_dR__784->SetBinError(15,2328.502);
   VbbHcc_both_Z_dR__784->SetBinError(16,1749.588);
   VbbHcc_both_Z_dR__784->SetBinError(17,1128.17);
   VbbHcc_both_Z_dR__784->SetBinError(18,808.0867);
   VbbHcc_both_Z_dR__784->SetBinError(19,711.718);
   VbbHcc_both_Z_dR__784->SetBinError(20,813.2513);
   VbbHcc_both_Z_dR__784->SetBinError(21,1310.609);
   VbbHcc_both_Z_dR__784->SetBinError(22,725.6315);
   VbbHcc_both_Z_dR__784->SetBinError(23,1345.03);
   VbbHcc_both_Z_dR__784->SetBinError(24,100.9386);
   VbbHcc_both_Z_dR__784->SetBinError(25,904.4518);
   VbbHcc_both_Z_dR__784->SetBinError(26,450.973);
   VbbHcc_both_Z_dR__784->SetBinError(27,526.0079);
   VbbHcc_both_Z_dR__784->SetBinError(28,349.7626);
   VbbHcc_both_Z_dR__784->SetBinError(29,184.291);
   VbbHcc_both_Z_dR__784->SetBinError(30,200.949);
   VbbHcc_both_Z_dR__784->SetBinError(31,221.7884);
   VbbHcc_both_Z_dR__784->SetEntries(10042);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Z_dR__784->SetFillColor(ci);
   VbbHcc_both_Z_dR__784->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__784->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__784->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__784->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__784->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__784->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__784->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__784->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__784->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__784->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__784->Draw("HIST");
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
