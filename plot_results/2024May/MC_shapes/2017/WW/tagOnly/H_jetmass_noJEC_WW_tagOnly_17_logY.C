#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_tagOnly_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_tagOnly_17/H_jetmass_noJEC_WW_tagOnly_17
//=========  (Thu May 23 20:48:43 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_tagOnly_17 = new TCanvas("H_jetmass_noJEC_WW_tagOnly_17", "H_jetmass_noJEC_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_tagOnly_17->SetHighLightColor(2);
   H_jetmass_noJEC_WW_tagOnly_17->Range(-60,-1.133947,340,1.630215);
   H_jetmass_noJEC_WW_tagOnly_17->SetFillColor(0);
   H_jetmass_noJEC_WW_tagOnly_17->SetFillStyle(4000);
   H_jetmass_noJEC_WW_tagOnly_17->SetBorderMode(0);
   H_jetmass_noJEC_WW_tagOnly_17->SetBorderSize(2);
   H_jetmass_noJEC_WW_tagOnly_17->SetLogy();
   H_jetmass_noJEC_WW_tagOnly_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagOnly_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_tagOnly_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_jetmass_noJEC__1283 = new TH1D("VH_tagOnly_H_jetmass_noJEC__1283","",150,0,300);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(3,0.6054699);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(4,6.650376);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(5,11.91927);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(6,8.170819);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(7,6.749685);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(8,8.394701);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(9,3.32944);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(10,2.819082);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(11,0.8828745);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(12,2.233553);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(13,0.4962219);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(14,1.08223);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(15,0.5523397);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(16,0.4644996);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(17,0.287519);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(18,1.521076);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(19,0.4564951);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(21,0.5239543);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(24,0.4524769);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(28,0.2776511);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinContent(34,0.4199524);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(3,0.4326153);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(4,1.701547);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(5,1.994825);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(6,1.845043);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(7,1.460665);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(8,1.766364);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(9,0.9495994);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(10,1.061749);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(11,0.4464088);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(12,0.9551749);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(13,0.3684459);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(14,0.5802567);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(15,0.392151);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(16,0.3302773);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(17,0.287519);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(18,1.070108);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(19,0.3227922);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(21,0.3800238);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(24,0.3825802);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(28,0.2776511);
   VH_tagOnly_H_jetmass_noJEC__1283->SetBinError(34,0.4199524);
   VH_tagOnly_H_jetmass_noJEC__1283->SetEntries(198);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_jetmass_noJEC__1283->SetLineColor(ci);
   VH_tagOnly_H_jetmass_noJEC__1283->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagOnly_H_jetmass_noJEC__1283->GetXaxis()->SetRange(1,150);
   VH_tagOnly_H_jetmass_noJEC__1283->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_noJEC__1283->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_jetmass_noJEC__1283->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_noJEC__1283->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1283->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_tagOnly_17->Modified();
   H_jetmass_noJEC_WW_tagOnly_17->cd();
   H_jetmass_noJEC_WW_tagOnly_17->SetSelected(H_jetmass_noJEC_WW_tagOnly_17);
}
