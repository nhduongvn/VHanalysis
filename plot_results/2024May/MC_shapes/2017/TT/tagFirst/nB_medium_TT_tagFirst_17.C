#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_TT_tagFirst_17()
{
//=========Macro generated from canvas: nB_medium_TT_tagFirst_17/nB_medium_TT_tagFirst_17
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_TT_tagFirst_17 = new TCanvas("nB_medium_TT_tagFirst_17", "nB_medium_TT_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_TT_tagFirst_17->SetHighLightColor(2);
   nB_medium_TT_tagFirst_17->Range(-2.5,-1737662,10.83333,1.563896e+07);
   nB_medium_TT_tagFirst_17->SetFillColor(0);
   nB_medium_TT_tagFirst_17->SetFillStyle(4000);
   nB_medium_TT_tagFirst_17->SetBorderMode(0);
   nB_medium_TT_tagFirst_17->SetBorderSize(2);
   nB_medium_TT_tagFirst_17->SetLeftMargin(0.15);
   nB_medium_TT_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_TT_tagFirst_17->SetFrameBorderMode(0);
   nB_medium_TT_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_TT_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4457 = new TH1D("Jets_cut_nB_medium__4457","",10,-0.5,9.5);
   Jets_cut_nB_medium__4457->SetBinContent(1,7108235);
   Jets_cut_nB_medium__4457->SetBinContent(2,1.323933e+07);
   Jets_cut_nB_medium__4457->SetBinContent(3,7117371);
   Jets_cut_nB_medium__4457->SetBinContent(4,607751.8);
   Jets_cut_nB_medium__4457->SetBinContent(5,30555.62);
   Jets_cut_nB_medium__4457->SetBinContent(6,1393.88);
   Jets_cut_nB_medium__4457->SetBinContent(7,70.66809);
   Jets_cut_nB_medium__4457->SetBinContent(8,4.494265);
   Jets_cut_nB_medium__4457->SetBinContent(9,0.1767886);
   Jets_cut_nB_medium__4457->SetBinContent(10,0.1726651);
   Jets_cut_nB_medium__4457->SetBinError(1,659.2658);
   Jets_cut_nB_medium__4457->SetBinError(2,901.5421);
   Jets_cut_nB_medium__4457->SetBinError(3,674.0817);
   Jets_cut_nB_medium__4457->SetBinError(4,214.0884);
   Jets_cut_nB_medium__4457->SetBinError(5,54.41858);
   Jets_cut_nB_medium__4457->SetBinError(6,13.51755);
   Jets_cut_nB_medium__4457->SetBinError(7,3.464566);
   Jets_cut_nB_medium__4457->SetBinError(8,0.846454);
   Jets_cut_nB_medium__4457->SetBinError(9,0.1071696);
   Jets_cut_nB_medium__4457->SetBinError(10,0.1726651);
   Jets_cut_nB_medium__4457->SetEntries(6.14341e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4457->SetLineColor(ci);
   Jets_cut_nB_medium__4457->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4457->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4457->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4457->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4457->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4457->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4457->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4457->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4457->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4457->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4457->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4457->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4457->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4457->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4457->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_TT_tagFirst_17->Modified();
   nB_medium_TT_tagFirst_17->cd();
   nB_medium_TT_tagFirst_17->SetSelected(nB_medium_TT_tagFirst_17);
}
