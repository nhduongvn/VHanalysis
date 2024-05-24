#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHcc_tagFirst_17()
{
//=========Macro generated from canvas: nB_medium_ZHcc_tagFirst_17/nB_medium_ZHcc_tagFirst_17
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHcc_tagFirst_17 = new TCanvas("nB_medium_ZHcc_tagFirst_17", "nB_medium_ZHcc_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHcc_tagFirst_17->SetHighLightColor(2);
   nB_medium_ZHcc_tagFirst_17->Range(-2.5,-61.53829,10.83333,553.8446);
   nB_medium_ZHcc_tagFirst_17->SetFillColor(0);
   nB_medium_ZHcc_tagFirst_17->SetFillStyle(4000);
   nB_medium_ZHcc_tagFirst_17->SetBorderMode(0);
   nB_medium_ZHcc_tagFirst_17->SetBorderSize(2);
   nB_medium_ZHcc_tagFirst_17->SetLeftMargin(0.15);
   nB_medium_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   nB_medium_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4442 = new TH1D("Jets_cut_nB_medium__4442","",10,-0.5,9.5);
   Jets_cut_nB_medium__4442->SetBinContent(1,468.8631);
   Jets_cut_nB_medium__4442->SetBinContent(2,146.6917);
   Jets_cut_nB_medium__4442->SetBinContent(3,30.96746);
   Jets_cut_nB_medium__4442->SetBinContent(4,3.928553);
   Jets_cut_nB_medium__4442->SetBinContent(5,0.2737867);
   Jets_cut_nB_medium__4442->SetBinContent(6,0.0177711);
   Jets_cut_nB_medium__4442->SetBinContent(7,0.0001458681);
   Jets_cut_nB_medium__4442->SetBinError(1,0.7537233);
   Jets_cut_nB_medium__4442->SetBinError(2,0.4039521);
   Jets_cut_nB_medium__4442->SetBinError(3,0.1797914);
   Jets_cut_nB_medium__4442->SetBinError(4,0.06204293);
   Jets_cut_nB_medium__4442->SetBinError(5,0.01774418);
   Jets_cut_nB_medium__4442->SetBinError(6,0.007209543);
   Jets_cut_nB_medium__4442->SetBinError(7,0.0001458681);
   Jets_cut_nB_medium__4442->SetEntries(995710);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4442->SetLineColor(ci);
   Jets_cut_nB_medium__4442->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4442->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4442->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4442->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4442->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4442->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4442->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4442->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4442->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4442->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4442->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4442->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4442->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4442->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4442->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHcc_tagFirst_17->Modified();
   nB_medium_ZHcc_tagFirst_17->cd();
   nB_medium_ZHcc_tagFirst_17->SetSelected(nB_medium_ZHcc_tagFirst_17);
}
