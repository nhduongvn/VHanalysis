#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_tagOnly_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_tagOnly_18/H_jetmass_noJEC_WW_tagOnly_18
//=========  (Fri May 24 12:42:23 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_tagOnly_18 = new TCanvas("H_jetmass_noJEC_WW_tagOnly_18", "H_jetmass_noJEC_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_tagOnly_18->SetHighLightColor(2);
   H_jetmass_noJEC_WW_tagOnly_18->Range(-60,-2.447078,340,22.0237);
   H_jetmass_noJEC_WW_tagOnly_18->SetFillColor(0);
   H_jetmass_noJEC_WW_tagOnly_18->SetFillStyle(4000);
   H_jetmass_noJEC_WW_tagOnly_18->SetBorderMode(0);
   H_jetmass_noJEC_WW_tagOnly_18->SetBorderSize(2);
   H_jetmass_noJEC_WW_tagOnly_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagOnly_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_jetmass_noJEC__1284 = new TH1D("VH_tagOnly_H_jetmass_noJEC__1284","",150,0,300);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(3,2.55585);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(4,11.9501);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(5,16.35641);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(6,18.6444);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(7,13.62677);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(8,12.41688);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(9,4.785656);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(10,8.932617);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(11,3.685893);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(12,4.325791);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(13,2.969087);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(14,2.34491);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(15,0.6974752);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(16,0.7794853);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(18,1.156313);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(19,0.4973834);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(20,1.617483);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(23,0.4851978);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinContent(44,0.3599908);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(3,1.507758);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(4,3.728674);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(5,3.575333);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(6,4.493626);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(7,3.868094);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(8,3.220947);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(9,1.903267);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(10,3.126256);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(11,1.768323);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(12,1.983951);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(13,1.534591);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(14,1.193495);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(15,0.6974752);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(16,0.7794853);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(18,0.9124351);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(19,0.4973834);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(20,0.9387916);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(23,0.4851978);
   VH_tagOnly_H_jetmass_noJEC__1284->SetBinError(44,0.3599908);
   VH_tagOnly_H_jetmass_noJEC__1284->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_jetmass_noJEC__1284->SetLineColor(ci);
   VH_tagOnly_H_jetmass_noJEC__1284->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagOnly_H_jetmass_noJEC__1284->GetXaxis()->SetRange(1,150);
   VH_tagOnly_H_jetmass_noJEC__1284->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_noJEC__1284->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_jetmass_noJEC__1284->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_noJEC__1284->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_noJEC__1284->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_tagOnly_18->Modified();
   H_jetmass_noJEC_WW_tagOnly_18->cd();
   H_jetmass_noJEC_WW_tagOnly_18->SetSelected(H_jetmass_noJEC_WW_tagOnly_18);
}
