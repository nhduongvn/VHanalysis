#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_SingleTop_tagFirst_17()
{
//=========Macro generated from canvas: nC_medium_SingleTop_tagFirst_17/nC_medium_SingleTop_tagFirst_17
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_SingleTop_tagFirst_17 = new TCanvas("nC_medium_SingleTop_tagFirst_17", "nC_medium_SingleTop_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_SingleTop_tagFirst_17->SetHighLightColor(2);
   nC_medium_SingleTop_tagFirst_17->Range(-2.5,-784767.6,10.83333,7062908);
   nC_medium_SingleTop_tagFirst_17->SetFillColor(0);
   nC_medium_SingleTop_tagFirst_17->SetFillStyle(4000);
   nC_medium_SingleTop_tagFirst_17->SetBorderMode(0);
   nC_medium_SingleTop_tagFirst_17->SetBorderSize(2);
   nC_medium_SingleTop_tagFirst_17->SetLeftMargin(0.15);
   nC_medium_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   nC_medium_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   nC_medium_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4490 = new TH1D("Jets_cut_nC_medium__4490","",10,-0.5,9.5);
   Jets_cut_nC_medium__4490->SetBinContent(1,5979181);
   Jets_cut_nC_medium__4490->SetBinContent(2,3099604);
   Jets_cut_nC_medium__4490->SetBinContent(3,811689.5);
   Jets_cut_nC_medium__4490->SetBinContent(4,136670.2);
   Jets_cut_nC_medium__4490->SetBinContent(5,17483.65);
   Jets_cut_nC_medium__4490->SetBinContent(6,1755.857);
   Jets_cut_nC_medium__4490->SetBinContent(7,143.0318);
   Jets_cut_nC_medium__4490->SetBinContent(8,17.31414);
   Jets_cut_nC_medium__4490->SetBinContent(9,0.110131);
   Jets_cut_nC_medium__4490->SetBinContent(10,0.03661696);
   Jets_cut_nC_medium__4490->SetBinError(1,721.085);
   Jets_cut_nC_medium__4490->SetBinError(2,574.2205);
   Jets_cut_nC_medium__4490->SetBinError(3,334.5099);
   Jets_cut_nC_medium__4490->SetBinError(4,161.0146);
   Jets_cut_nC_medium__4490->SetBinError(5,66.78495);
   Jets_cut_nC_medium__4490->SetBinError(6,23.28973);
   Jets_cut_nC_medium__4490->SetBinError(7,6.974169);
   Jets_cut_nC_medium__4490->SetBinError(8,3.199406);
   Jets_cut_nC_medium__4490->SetBinError(9,0.07788823);
   Jets_cut_nC_medium__4490->SetBinError(10,0.03661696);
   Jets_cut_nC_medium__4490->SetEntries(2.00651e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4490->SetLineColor(ci);
   Jets_cut_nC_medium__4490->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4490->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4490->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4490->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4490->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4490->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4490->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4490->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4490->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4490->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4490->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4490->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4490->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4490->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4490->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_SingleTop_tagFirst_17->Modified();
   nC_medium_SingleTop_tagFirst_17->cd();
   nC_medium_SingleTop_tagFirst_17->SetSelected(nC_medium_SingleTop_tagFirst_17);
}
