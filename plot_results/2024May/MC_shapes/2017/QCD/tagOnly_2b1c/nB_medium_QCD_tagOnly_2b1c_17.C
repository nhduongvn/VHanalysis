#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_QCD_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_QCD_tagOnly_2b1c_17/nB_medium_QCD_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_QCD_tagOnly_2b1c_17 = new TCanvas("nB_medium_QCD_tagOnly_2b1c_17", "nB_medium_QCD_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_QCD_tagOnly_2b1c_17->SetHighLightColor(2);
   nB_medium_QCD_tagOnly_2b1c_17->Range(-2.5,-1.547677e+11,10.83333,1.392909e+12);
   nB_medium_QCD_tagOnly_2b1c_17->SetFillColor(0);
   nB_medium_QCD_tagOnly_2b1c_17->SetFillStyle(4000);
   nB_medium_QCD_tagOnly_2b1c_17->SetBorderMode(0);
   nB_medium_QCD_tagOnly_2b1c_17->SetBorderSize(2);
   nB_medium_QCD_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nB_medium_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nB_medium_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7568 = new TH1D("Jets_cut_nB_medium__7568","",10,-0.5,9.5);
   Jets_cut_nB_medium__7568->SetBinContent(1,1.179182e+12);
   Jets_cut_nB_medium__7568->SetBinContent(2,3.240434e+10);
   Jets_cut_nB_medium__7568->SetBinContent(3,1.302856e+09);
   Jets_cut_nB_medium__7568->SetBinContent(4,1.457009e+07);
   Jets_cut_nB_medium__7568->SetBinContent(5,443750.7);
   Jets_cut_nB_medium__7568->SetBinContent(6,8978.608);
   Jets_cut_nB_medium__7568->SetBinContent(7,204.4691);
   Jets_cut_nB_medium__7568->SetBinContent(8,20.38055);
   Jets_cut_nB_medium__7568->SetBinContent(9,0.2554606);
   Jets_cut_nB_medium__7568->SetBinError(1,1.348589e+08);
   Jets_cut_nB_medium__7568->SetBinError(2,2.163913e+07);
   Jets_cut_nB_medium__7568->SetBinError(3,4020402);
   Jets_cut_nB_medium__7568->SetBinError(4,234380.8);
   Jets_cut_nB_medium__7568->SetBinError(5,49337.73);
   Jets_cut_nB_medium__7568->SetBinError(6,1805.38);
   Jets_cut_nB_medium__7568->SetBinError(7,80.81582);
   Jets_cut_nB_medium__7568->SetBinError(8,13.22126);
   Jets_cut_nB_medium__7568->SetBinError(9,0.2554606);
   Jets_cut_nB_medium__7568->SetEntries(3.134799e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7568->SetLineColor(ci);
   Jets_cut_nB_medium__7568->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7568->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7568->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7568->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7568->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7568->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7568->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7568->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7568->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7568->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7568->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7568->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7568->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7568->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7568->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_QCD_tagOnly_2b1c_17->Modified();
   nB_medium_QCD_tagOnly_2b1c_17->cd();
   nB_medium_QCD_tagOnly_2b1c_17->SetSelected(nB_medium_QCD_tagOnly_2b1c_17);
}
