#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_WZ_DHZfirst_2b1c_17/nB_medium_WZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:44:37 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WZ_DHZfirst_2b1c_17 = new TCanvas("nB_medium_WZ_DHZfirst_2b1c_17", "nB_medium_WZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   nB_medium_WZ_DHZfirst_2b1c_17->Range(-2.5,-210555.6,10.83333,1895001);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFillColor(0);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   nB_medium_WZ_DHZfirst_2b1c_17->SetBorderMode(0);
   nB_medium_WZ_DHZfirst_2b1c_17->SetBorderSize(2);
   nB_medium_WZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__8366 = new TH1D("Jets_cut_nB_medium__8366","",10,-0.5,9.5);
   Jets_cut_nB_medium__8366->SetBinContent(1,1604233);
   Jets_cut_nB_medium__8366->SetBinContent(2,139510.1);
   Jets_cut_nB_medium__8366->SetBinContent(3,13760.62);
   Jets_cut_nB_medium__8366->SetBinContent(4,538.5663);
   Jets_cut_nB_medium__8366->SetBinContent(5,12.82375);
   Jets_cut_nB_medium__8366->SetBinContent(6,0.9985887);
   Jets_cut_nB_medium__8366->SetBinError(1,631.6926);
   Jets_cut_nB_medium__8366->SetBinError(2,186.6054);
   Jets_cut_nB_medium__8366->SetBinError(3,58.95182);
   Jets_cut_nB_medium__8366->SetBinError(4,12.05699);
   Jets_cut_nB_medium__8366->SetBinError(5,2.054385);
   Jets_cut_nB_medium__8366->SetBinError(6,0.7110427);
   Jets_cut_nB_medium__8366->SetEntries(7889000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__8366->SetLineColor(ci);
   Jets_cut_nB_medium__8366->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__8366->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__8366->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8366->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8366->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8366->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__8366->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8366->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__8366->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__8366->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__8366->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8366->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8366->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8366->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8366->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WZ_DHZfirst_2b1c_17->Modified();
   nB_medium_WZ_DHZfirst_2b1c_17->cd();
   nB_medium_WZ_DHZfirst_2b1c_17->SetSelected(nB_medium_WZ_DHZfirst_2b1c_17);
}
