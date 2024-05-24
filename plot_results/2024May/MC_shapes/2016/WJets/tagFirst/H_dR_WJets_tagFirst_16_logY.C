#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: H_dR_WJets_tagFirst_16/H_dR_WJets_tagFirst_16
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WJets_tagFirst_16 = new TCanvas("H_dR_WJets_tagFirst_16", "H_dR_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WJets_tagFirst_16->SetHighLightColor(2);
   H_dR_WJets_tagFirst_16->Range(-1.24,-1.070288,7.026667,3.506479);
   H_dR_WJets_tagFirst_16->SetFillColor(0);
   H_dR_WJets_tagFirst_16->SetFillStyle(4000);
   H_dR_WJets_tagFirst_16->SetBorderMode(0);
   H_dR_WJets_tagFirst_16->SetBorderSize(2);
   H_dR_WJets_tagFirst_16->SetLogy();
   H_dR_WJets_tagFirst_16->SetLeftMargin(0.15);
   H_dR_WJets_tagFirst_16->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_16->SetFrameBorderMode(0);
   H_dR_WJets_tagFirst_16->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__160 = new TH1D("VH_tagFirst_H_dR__160","",30,0,6);
   VH_tagFirst_H_dR__160->SetBinContent(2,0.4879986);
   VH_tagFirst_H_dR__160->SetBinContent(3,503.4437);
   VH_tagFirst_H_dR__160->SetBinContent(4,590.5457);
   VH_tagFirst_H_dR__160->SetBinContent(5,543.3923);
   VH_tagFirst_H_dR__160->SetBinContent(6,496.7787);
   VH_tagFirst_H_dR__160->SetBinContent(7,412.9621);
   VH_tagFirst_H_dR__160->SetBinContent(8,388.2043);
   VH_tagFirst_H_dR__160->SetBinContent(9,387.3392);
   VH_tagFirst_H_dR__160->SetBinContent(10,391.3517);
   VH_tagFirst_H_dR__160->SetBinContent(11,383.2819);
   VH_tagFirst_H_dR__160->SetBinContent(12,461.0281);
   VH_tagFirst_H_dR__160->SetBinContent(13,469.49);
   VH_tagFirst_H_dR__160->SetBinContent(14,476.4375);
   VH_tagFirst_H_dR__160->SetBinContent(15,564.496);
   VH_tagFirst_H_dR__160->SetBinContent(16,589.5493);
   VH_tagFirst_H_dR__160->SetBinContent(17,562.5662);
   VH_tagFirst_H_dR__160->SetBinContent(18,547.5266);
   VH_tagFirst_H_dR__160->SetBinContent(19,463.6289);
   VH_tagFirst_H_dR__160->SetBinContent(20,384.469);
   VH_tagFirst_H_dR__160->SetBinContent(21,352.1861);
   VH_tagFirst_H_dR__160->SetBinContent(22,272.2317);
   VH_tagFirst_H_dR__160->SetBinContent(23,232.464);
   VH_tagFirst_H_dR__160->SetBinContent(24,184.9453);
   VH_tagFirst_H_dR__160->SetBinContent(25,168.2843);
   VH_tagFirst_H_dR__160->SetBinContent(26,143.2967);
   VH_tagFirst_H_dR__160->SetBinContent(27,118.6003);
   VH_tagFirst_H_dR__160->SetBinContent(28,107.7349);
   VH_tagFirst_H_dR__160->SetBinContent(29,94.39221);
   VH_tagFirst_H_dR__160->SetBinContent(30,55.57851);
   VH_tagFirst_H_dR__160->SetBinContent(31,55.87548);
   VH_tagFirst_H_dR__160->SetBinError(2,0.2386503);
   VH_tagFirst_H_dR__160->SetBinError(3,14.18058);
   VH_tagFirst_H_dR__160->SetBinError(4,18.45023);
   VH_tagFirst_H_dR__160->SetBinError(5,25.72591);
   VH_tagFirst_H_dR__160->SetBinError(6,26.35694);
   VH_tagFirst_H_dR__160->SetBinError(7,20.82678);
   VH_tagFirst_H_dR__160->SetBinError(8,20.0249);
   VH_tagFirst_H_dR__160->SetBinError(9,20.34181);
   VH_tagFirst_H_dR__160->SetBinError(10,19.42068);
   VH_tagFirst_H_dR__160->SetBinError(11,17.32516);
   VH_tagFirst_H_dR__160->SetBinError(12,21.76287);
   VH_tagFirst_H_dR__160->SetBinError(13,22.45716);
   VH_tagFirst_H_dR__160->SetBinError(14,17.21235);
   VH_tagFirst_H_dR__160->SetBinError(15,23.73128);
   VH_tagFirst_H_dR__160->SetBinError(16,22.90866);
   VH_tagFirst_H_dR__160->SetBinError(17,22.51176);
   VH_tagFirst_H_dR__160->SetBinError(18,22.44458);
   VH_tagFirst_H_dR__160->SetBinError(19,20.56783);
   VH_tagFirst_H_dR__160->SetBinError(20,16.9981);
   VH_tagFirst_H_dR__160->SetBinError(21,18.44027);
   VH_tagFirst_H_dR__160->SetBinError(22,14.23926);
   VH_tagFirst_H_dR__160->SetBinError(23,14.26257);
   VH_tagFirst_H_dR__160->SetBinError(24,12.53141);
   VH_tagFirst_H_dR__160->SetBinError(25,13.88807);
   VH_tagFirst_H_dR__160->SetBinError(26,11.8458);
   VH_tagFirst_H_dR__160->SetBinError(27,12.69548);
   VH_tagFirst_H_dR__160->SetBinError(28,11.75077);
   VH_tagFirst_H_dR__160->SetBinError(29,8.86828);
   VH_tagFirst_H_dR__160->SetBinError(30,6.313346);
   VH_tagFirst_H_dR__160->SetBinError(31,8.340095);
   VH_tagFirst_H_dR__160->SetEntries(115312);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__160->SetLineColor(ci);
   VH_tagFirst_H_dR__160->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__160->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__160->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__160->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__160->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__160->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__160->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__160->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__160->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__160->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__160->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__160->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__160->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__160->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__160->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WJets_tagFirst_16->Modified();
   H_dR_WJets_tagFirst_16->cd();
   H_dR_WJets_tagFirst_16->SetSelected(H_dR_WJets_tagFirst_16);
}
