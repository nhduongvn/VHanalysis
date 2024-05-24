#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHbb_tagOnly_18()
{
//=========Macro generated from canvas: nB_medium_ZHbb_tagOnly_18/nB_medium_ZHbb_tagOnly_18
//=========  (Fri May 24 12:43:30 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHbb_tagOnly_18 = new TCanvas("nB_medium_ZHbb_tagOnly_18", "nB_medium_ZHbb_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHbb_tagOnly_18->SetHighLightColor(2);
   nB_medium_ZHbb_tagOnly_18->Range(-2.5,-1353.654,10.83333,12182.89);
   nB_medium_ZHbb_tagOnly_18->SetFillColor(0);
   nB_medium_ZHbb_tagOnly_18->SetFillStyle(4000);
   nB_medium_ZHbb_tagOnly_18->SetBorderMode(0);
   nB_medium_ZHbb_tagOnly_18->SetBorderSize(2);
   nB_medium_ZHbb_tagOnly_18->SetLeftMargin(0.15);
   nB_medium_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   nB_medium_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__5226 = new TH1D("Jets_cut_nB_medium__5226","",10,-0.5,9.5);
   Jets_cut_nB_medium__5226->SetBinContent(1,8163.63);
   Jets_cut_nB_medium__5226->SetBinContent(2,10313.56);
   Jets_cut_nB_medium__5226->SetBinContent(3,4693.4);
   Jets_cut_nB_medium__5226->SetBinContent(4,905.9339);
   Jets_cut_nB_medium__5226->SetBinContent(5,167.3334);
   Jets_cut_nB_medium__5226->SetBinContent(6,4.581698);
   Jets_cut_nB_medium__5226->SetBinContent(7,0.2582024);
   Jets_cut_nB_medium__5226->SetBinContent(8,0.000725628);
   Jets_cut_nB_medium__5226->SetBinContent(9,0.0005966986);
   Jets_cut_nB_medium__5226->SetBinError(1,4.803597);
   Jets_cut_nB_medium__5226->SetBinError(2,5.426288);
   Jets_cut_nB_medium__5226->SetBinError(3,3.766508);
   Jets_cut_nB_medium__5226->SetBinError(4,1.724652);
   Jets_cut_nB_medium__5226->SetBinError(5,0.8002148);
   Jets_cut_nB_medium__5226->SetBinError(6,0.1425242);
   Jets_cut_nB_medium__5226->SetBinError(7,0.03233947);
   Jets_cut_nB_medium__5226->SetBinError(8,0.000725628);
   Jets_cut_nB_medium__5226->SetBinError(9,0.0005966986);
   Jets_cut_nB_medium__5226->SetEntries(1.488426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__5226->SetLineColor(ci);
   Jets_cut_nB_medium__5226->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__5226->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__5226->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5226->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5226->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5226->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__5226->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5226->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__5226->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__5226->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__5226->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5226->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5226->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5226->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5226->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHbb_tagOnly_18->Modified();
   nB_medium_ZHbb_tagOnly_18->cd();
   nB_medium_ZHbb_tagOnly_18->SetSelected(nB_medium_ZHbb_tagOnly_18);
}
