#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_TT_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_TT_tagOnly_2b1c_17/nB_medium_TT_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_TT_tagOnly_2b1c_17 = new TCanvas("nB_medium_TT_tagOnly_2b1c_17", "nB_medium_TT_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_TT_tagOnly_2b1c_17->SetHighLightColor(2);
   nB_medium_TT_tagOnly_2b1c_17->Range(-2.5,-1737662,10.83333,1.563896e+07);
   nB_medium_TT_tagOnly_2b1c_17->SetFillColor(0);
   nB_medium_TT_tagOnly_2b1c_17->SetFillStyle(4000);
   nB_medium_TT_tagOnly_2b1c_17->SetBorderMode(0);
   nB_medium_TT_tagOnly_2b1c_17->SetBorderSize(2);
   nB_medium_TT_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nB_medium_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nB_medium_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7577 = new TH1D("Jets_cut_nB_medium__7577","",10,-0.5,9.5);
   Jets_cut_nB_medium__7577->SetBinContent(1,7108235);
   Jets_cut_nB_medium__7577->SetBinContent(2,1.323933e+07);
   Jets_cut_nB_medium__7577->SetBinContent(3,7117371);
   Jets_cut_nB_medium__7577->SetBinContent(4,607751.8);
   Jets_cut_nB_medium__7577->SetBinContent(5,30555.62);
   Jets_cut_nB_medium__7577->SetBinContent(6,1393.88);
   Jets_cut_nB_medium__7577->SetBinContent(7,70.66809);
   Jets_cut_nB_medium__7577->SetBinContent(8,4.494265);
   Jets_cut_nB_medium__7577->SetBinContent(9,0.1767886);
   Jets_cut_nB_medium__7577->SetBinContent(10,0.1726651);
   Jets_cut_nB_medium__7577->SetBinError(1,659.2658);
   Jets_cut_nB_medium__7577->SetBinError(2,901.5421);
   Jets_cut_nB_medium__7577->SetBinError(3,674.0817);
   Jets_cut_nB_medium__7577->SetBinError(4,214.0884);
   Jets_cut_nB_medium__7577->SetBinError(5,54.41858);
   Jets_cut_nB_medium__7577->SetBinError(6,13.51755);
   Jets_cut_nB_medium__7577->SetBinError(7,3.464566);
   Jets_cut_nB_medium__7577->SetBinError(8,0.846454);
   Jets_cut_nB_medium__7577->SetBinError(9,0.1071696);
   Jets_cut_nB_medium__7577->SetBinError(10,0.1726651);
   Jets_cut_nB_medium__7577->SetEntries(6.14341e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7577->SetLineColor(ci);
   Jets_cut_nB_medium__7577->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7577->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7577->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7577->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7577->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7577->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7577->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7577->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7577->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7577->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7577->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7577->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7577->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7577->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7577->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_TT_tagOnly_2b1c_17->Modified();
   nB_medium_TT_tagOnly_2b1c_17->cd();
   nB_medium_TT_tagOnly_2b1c_17->SetSelected(nB_medium_TT_tagOnly_2b1c_17);
}
