#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WJets_tagFirst_17_logY()
{
//=========Macro generated from canvas: H_dR_WJets_tagFirst_17/H_dR_WJets_tagFirst_17
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WJets_tagFirst_17 = new TCanvas("H_dR_WJets_tagFirst_17", "H_dR_WJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WJets_tagFirst_17->SetHighLightColor(2);
   H_dR_WJets_tagFirst_17->Range(-1.24,-2.13858,7.026667,3.438656);
   H_dR_WJets_tagFirst_17->SetFillColor(0);
   H_dR_WJets_tagFirst_17->SetFillStyle(4000);
   H_dR_WJets_tagFirst_17->SetBorderMode(0);
   H_dR_WJets_tagFirst_17->SetBorderSize(2);
   H_dR_WJets_tagFirst_17->SetLogy();
   H_dR_WJets_tagFirst_17->SetLeftMargin(0.15);
   H_dR_WJets_tagFirst_17->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_17->SetFrameBorderMode(0);
   H_dR_WJets_tagFirst_17->SetFrameFillStyle(1000);
   H_dR_WJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__161 = new TH1D("VH_tagFirst_H_dR__161","",30,0,6);
   VH_tagFirst_H_dR__161->SetBinContent(2,0.05250173);
   VH_tagFirst_H_dR__161->SetBinContent(3,327.6541);
   VH_tagFirst_H_dR__161->SetBinContent(4,386.2594);
   VH_tagFirst_H_dR__161->SetBinContent(5,307.8525);
   VH_tagFirst_H_dR__161->SetBinContent(6,306.0174);
   VH_tagFirst_H_dR__161->SetBinContent(7,238.8576);
   VH_tagFirst_H_dR__161->SetBinContent(8,269.2992);
   VH_tagFirst_H_dR__161->SetBinContent(9,234.9614);
   VH_tagFirst_H_dR__161->SetBinContent(10,244.7433);
   VH_tagFirst_H_dR__161->SetBinContent(11,242.0374);
   VH_tagFirst_H_dR__161->SetBinContent(12,230.947);
   VH_tagFirst_H_dR__161->SetBinContent(13,305.2786);
   VH_tagFirst_H_dR__161->SetBinContent(14,332.5068);
   VH_tagFirst_H_dR__161->SetBinContent(15,357.8669);
   VH_tagFirst_H_dR__161->SetBinContent(16,401.2205);
   VH_tagFirst_H_dR__161->SetBinContent(17,336.7665);
   VH_tagFirst_H_dR__161->SetBinContent(18,307.6554);
   VH_tagFirst_H_dR__161->SetBinContent(19,273.155);
   VH_tagFirst_H_dR__161->SetBinContent(20,279.7526);
   VH_tagFirst_H_dR__161->SetBinContent(21,207.382);
   VH_tagFirst_H_dR__161->SetBinContent(22,182.4152);
   VH_tagFirst_H_dR__161->SetBinContent(23,137.2946);
   VH_tagFirst_H_dR__161->SetBinContent(24,129.4125);
   VH_tagFirst_H_dR__161->SetBinContent(25,113.3137);
   VH_tagFirst_H_dR__161->SetBinContent(26,73.84933);
   VH_tagFirst_H_dR__161->SetBinContent(27,79.09423);
   VH_tagFirst_H_dR__161->SetBinContent(28,60.49187);
   VH_tagFirst_H_dR__161->SetBinContent(29,57.40731);
   VH_tagFirst_H_dR__161->SetBinContent(30,43.0522);
   VH_tagFirst_H_dR__161->SetBinContent(31,26.1249);
   VH_tagFirst_H_dR__161->SetBinError(2,0.03894385);
   VH_tagFirst_H_dR__161->SetBinError(3,12.61804);
   VH_tagFirst_H_dR__161->SetBinError(4,17.64841);
   VH_tagFirst_H_dR__161->SetBinError(5,16.37578);
   VH_tagFirst_H_dR__161->SetBinError(6,22.86714);
   VH_tagFirst_H_dR__161->SetBinError(7,14.98524);
   VH_tagFirst_H_dR__161->SetBinError(8,24.03905);
   VH_tagFirst_H_dR__161->SetBinError(9,15.33018);
   VH_tagFirst_H_dR__161->SetBinError(10,15.02128);
   VH_tagFirst_H_dR__161->SetBinError(11,14.70166);
   VH_tagFirst_H_dR__161->SetBinError(12,12.93029);
   VH_tagFirst_H_dR__161->SetBinError(13,17.63485);
   VH_tagFirst_H_dR__161->SetBinError(14,26.21928);
   VH_tagFirst_H_dR__161->SetBinError(15,23.5419);
   VH_tagFirst_H_dR__161->SetBinError(16,21.70926);
   VH_tagFirst_H_dR__161->SetBinError(17,17.14946);
   VH_tagFirst_H_dR__161->SetBinError(18,14.93495);
   VH_tagFirst_H_dR__161->SetBinError(19,15.09187);
   VH_tagFirst_H_dR__161->SetBinError(20,24.34545);
   VH_tagFirst_H_dR__161->SetBinError(21,11.67499);
   VH_tagFirst_H_dR__161->SetBinError(22,13.09955);
   VH_tagFirst_H_dR__161->SetBinError(23,8.864481);
   VH_tagFirst_H_dR__161->SetBinError(24,14.06129);
   VH_tagFirst_H_dR__161->SetBinError(25,11.3296);
   VH_tagFirst_H_dR__161->SetBinError(26,5.44989);
   VH_tagFirst_H_dR__161->SetBinError(27,12.08421);
   VH_tagFirst_H_dR__161->SetBinError(28,7.183351);
   VH_tagFirst_H_dR__161->SetBinError(29,6.215237);
   VH_tagFirst_H_dR__161->SetBinError(30,6.628972);
   VH_tagFirst_H_dR__161->SetBinError(31,3.524598);
   VH_tagFirst_H_dR__161->SetEntries(45049);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__161->SetLineColor(ci);
   VH_tagFirst_H_dR__161->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__161->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__161->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__161->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__161->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__161->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__161->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__161->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__161->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__161->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__161->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__161->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__161->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__161->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__161->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WJets_tagFirst_17->Modified();
   H_dR_WJets_tagFirst_17->cd();
   H_dR_WJets_tagFirst_17->SetSelected(H_dR_WJets_tagFirst_17);
}
