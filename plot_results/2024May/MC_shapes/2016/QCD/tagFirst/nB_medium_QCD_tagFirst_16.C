#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_QCD_tagFirst_16()
{
//=========Macro generated from canvas: nB_medium_QCD_tagFirst_16/nB_medium_QCD_tagFirst_16
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_QCD_tagFirst_16 = new TCanvas("nB_medium_QCD_tagFirst_16", "nB_medium_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_QCD_tagFirst_16->SetHighLightColor(2);
   nB_medium_QCD_tagFirst_16->Range(-2.5,-4.975383e+11,10.83333,4.477845e+12);
   nB_medium_QCD_tagFirst_16->SetFillColor(0);
   nB_medium_QCD_tagFirst_16->SetFillStyle(4000);
   nB_medium_QCD_tagFirst_16->SetBorderMode(0);
   nB_medium_QCD_tagFirst_16->SetBorderSize(2);
   nB_medium_QCD_tagFirst_16->SetLeftMargin(0.15);
   nB_medium_QCD_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_QCD_tagFirst_16->SetFrameBorderMode(0);
   nB_medium_QCD_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4447 = new TH1D("Jets_cut_nB_medium__4447","",10,-0.5,9.5);
   Jets_cut_nB_medium__4447->SetBinContent(1,3.790768e+12);
   Jets_cut_nB_medium__4447->SetBinContent(2,8.705349e+10);
   Jets_cut_nB_medium__4447->SetBinContent(3,2.766416e+09);
   Jets_cut_nB_medium__4447->SetBinContent(4,1.057585e+07);
   Jets_cut_nB_medium__4447->SetBinContent(5,183899.9);
   Jets_cut_nB_medium__4447->SetBinContent(6,3013.269);
   Jets_cut_nB_medium__4447->SetBinContent(7,82.09275);
   Jets_cut_nB_medium__4447->SetBinContent(8,0.74587);
   Jets_cut_nB_medium__4447->SetBinError(1,6.352013e+08);
   Jets_cut_nB_medium__4447->SetBinError(2,9.646019e+07);
   Jets_cut_nB_medium__4447->SetBinError(3,1.67865e+07);
   Jets_cut_nB_medium__4447->SetBinError(4,575735.1);
   Jets_cut_nB_medium__4447->SetBinError(5,7527.425);
   Jets_cut_nB_medium__4447->SetBinError(6,594.7252);
   Jets_cut_nB_medium__4447->SetBinError(7,36.33516);
   Jets_cut_nB_medium__4447->SetBinError(8,0.5800213);
   Jets_cut_nB_medium__4447->SetEntries(2.468814e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4447->SetLineColor(ci);
   Jets_cut_nB_medium__4447->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4447->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4447->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4447->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4447->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4447->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4447->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4447->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4447->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4447->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4447->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4447->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4447->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4447->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4447->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_QCD_tagFirst_16->Modified();
   nB_medium_QCD_tagFirst_16->cd();
   nB_medium_QCD_tagFirst_16->SetSelected(nB_medium_QCD_tagFirst_16);
}
