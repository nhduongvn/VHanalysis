#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_QCD_tagFirst_17()
{
//=========Macro generated from canvas: nC_medium_QCD_tagFirst_17/nC_medium_QCD_tagFirst_17
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_QCD_tagFirst_17 = new TCanvas("nC_medium_QCD_tagFirst_17", "nC_medium_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_QCD_tagFirst_17->SetHighLightColor(2);
   nC_medium_QCD_tagFirst_17->Range(-2.5,-1.389628e+11,10.83333,1.250665e+12);
   nC_medium_QCD_tagFirst_17->SetFillColor(0);
   nC_medium_QCD_tagFirst_17->SetFillStyle(4000);
   nC_medium_QCD_tagFirst_17->SetBorderMode(0);
   nC_medium_QCD_tagFirst_17->SetBorderSize(2);
   nC_medium_QCD_tagFirst_17->SetLeftMargin(0.15);
   nC_medium_QCD_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_QCD_tagFirst_17->SetFrameBorderMode(0);
   nC_medium_QCD_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4478 = new TH1D("Jets_cut_nC_medium__4478","",10,-0.5,9.5);
   Jets_cut_nC_medium__4478->SetBinContent(1,1.058764e+12);
   Jets_cut_nC_medium__4478->SetBinContent(2,1.429273e+11);
   Jets_cut_nC_medium__4478->SetBinContent(3,1.094103e+10);
   Jets_cut_nC_medium__4478->SetBinContent(4,2.595904e+08);
   Jets_cut_nC_medium__4478->SetBinContent(5,1.162491e+07);
   Jets_cut_nC_medium__4478->SetBinContent(6,529066.2);
   Jets_cut_nC_medium__4478->SetBinContent(7,25661.87);
   Jets_cut_nC_medium__4478->SetBinContent(8,1706.747);
   Jets_cut_nC_medium__4478->SetBinContent(9,67.71904);
   Jets_cut_nC_medium__4478->SetBinContent(10,5.293016);
   Jets_cut_nC_medium__4478->SetBinError(1,1.280806e+08);
   Jets_cut_nC_medium__4478->SetBinError(2,4.604015e+07);
   Jets_cut_nC_medium__4478->SetBinError(3,1.208607e+07);
   Jets_cut_nC_medium__4478->SetBinError(4,982962);
   Jets_cut_nC_medium__4478->SetBinError(5,145418.8);
   Jets_cut_nC_medium__4478->SetBinError(6,11828.85);
   Jets_cut_nC_medium__4478->SetBinError(7,1942.889);
   Jets_cut_nC_medium__4478->SetBinError(8,407.6707);
   Jets_cut_nC_medium__4478->SetBinError(9,19.70926);
   Jets_cut_nC_medium__4478->SetBinError(10,4.432215);
   Jets_cut_nC_medium__4478->SetEntries(3.134799e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4478->SetLineColor(ci);
   Jets_cut_nC_medium__4478->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4478->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4478->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4478->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4478->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4478->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4478->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4478->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4478->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4478->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4478->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4478->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4478->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4478->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4478->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_QCD_tagFirst_17->Modified();
   nC_medium_QCD_tagFirst_17->cd();
   nC_medium_QCD_tagFirst_17->SetSelected(nC_medium_QCD_tagFirst_17);
}
