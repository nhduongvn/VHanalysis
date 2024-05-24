#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZHbb_tagFirst_17()
{
//=========Macro generated from canvas: nC_medium_ZHbb_tagFirst_17/nC_medium_ZHbb_tagFirst_17
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZHbb_tagFirst_17 = new TCanvas("nC_medium_ZHbb_tagFirst_17", "nC_medium_ZHbb_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZHbb_tagFirst_17->SetHighLightColor(2);
   nC_medium_ZHbb_tagFirst_17->Range(-2.5,-1091.415,10.83333,9822.739);
   nC_medium_ZHbb_tagFirst_17->SetFillColor(0);
   nC_medium_ZHbb_tagFirst_17->SetFillStyle(4000);
   nC_medium_ZHbb_tagFirst_17->SetBorderMode(0);
   nC_medium_ZHbb_tagFirst_17->SetBorderSize(2);
   nC_medium_ZHbb_tagFirst_17->SetLeftMargin(0.15);
   nC_medium_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   nC_medium_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4475 = new TH1D("Jets_cut_nC_medium__4475","",10,-0.5,9.5);
   Jets_cut_nC_medium__4475->SetBinContent(1,8315.546);
   Jets_cut_nC_medium__4475->SetBinContent(2,4629.016);
   Jets_cut_nC_medium__4475->SetBinContent(3,1401.824);
   Jets_cut_nC_medium__4475->SetBinContent(4,263.533);
   Jets_cut_nC_medium__4475->SetBinContent(5,34.53586);
   Jets_cut_nC_medium__4475->SetBinContent(6,3.473893);
   Jets_cut_nC_medium__4475->SetBinContent(7,0.2686133);
   Jets_cut_nC_medium__4475->SetBinContent(8,0.01564645);
   Jets_cut_nC_medium__4475->SetBinContent(9,0.0007056045);
   Jets_cut_nC_medium__4475->SetBinError(1,3.576838);
   Jets_cut_nC_medium__4475->SetBinError(2,2.628397);
   Jets_cut_nC_medium__4475->SetBinError(3,1.438506);
   Jets_cut_nC_medium__4475->SetBinError(4,0.6341969);
   Jets_cut_nC_medium__4475->SetBinError(5,0.2413889);
   Jets_cut_nC_medium__4475->SetBinError(6,0.08140866);
   Jets_cut_nC_medium__4475->SetBinError(7,0.02176833);
   Jets_cut_nC_medium__4475->SetBinError(8,0.00449604);
   Jets_cut_nC_medium__4475->SetBinError(9,0.0004110467);
   Jets_cut_nC_medium__4475->SetEntries(1.472656e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4475->SetLineColor(ci);
   Jets_cut_nC_medium__4475->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4475->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4475->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4475->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4475->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4475->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4475->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4475->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4475->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4475->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4475->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4475->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4475->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4475->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4475->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZHbb_tagFirst_17->Modified();
   nC_medium_ZHbb_tagFirst_17->cd();
   nC_medium_ZHbb_tagFirst_17->SetSelected(nC_medium_ZHbb_tagFirst_17);
}
