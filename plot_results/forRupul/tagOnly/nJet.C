#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet()
{
//=========Macro generated from canvas: nJet/nJet
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *nJet = new TCanvas("nJet", "nJet",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet->SetHighLightColor(2);
   nJet->Range(-3.3,-36.23871,15.36667,326.1483);
   nJet->SetFillColor(0);
   nJet->SetFillStyle(4000);
   nJet->SetBorderMode(0);
   nJet->SetBorderSize(2);
   nJet->SetLeftMargin(0.15);
   nJet->SetFrameFillStyle(1000);
   nJet->SetFrameBorderMode(0);
   nJet->SetFrameFillStyle(1000);
   nJet->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__99 = new TH1D("Jets_cut_nJet__99","",14,-0.5,13.5);
   Jets_cut_nJet__99->SetBinContent(1,139.1619);
   Jets_cut_nJet__99->SetBinContent(2,183.1513);
   Jets_cut_nJet__99->SetBinContent(3,276.1044);
   Jets_cut_nJet__99->SetBinContent(4,226.246);
   Jets_cut_nJet__99->SetBinContent(5,124.6083);
   Jets_cut_nJet__99->SetBinContent(6,38.84897);
   Jets_cut_nJet__99->SetBinContent(7,10.64034);
   Jets_cut_nJet__99->SetBinContent(8,2.803861);
   Jets_cut_nJet__99->SetBinContent(9,0.7092759);
   Jets_cut_nJet__99->SetBinContent(10,0.1369163);
   Jets_cut_nJet__99->SetBinContent(11,0.02792563);
   Jets_cut_nJet__99->SetBinContent(13,0.006875076);
   Jets_cut_nJet__99->SetBinContent(14,0.003244308);
   Jets_cut_nJet__99->SetBinError(1,0.6167177);
   Jets_cut_nJet__99->SetBinError(2,0.6846738);
   Jets_cut_nJet__99->SetBinError(3,0.8213437);
   Jets_cut_nJet__99->SetBinError(4,0.7852286);
   Jets_cut_nJet__99->SetBinError(5,0.6600054);
   Jets_cut_nJet__99->SetBinError(6,0.3964115);
   Jets_cut_nJet__99->SetBinError(7,0.2112893);
   Jets_cut_nJet__99->SetBinError(8,0.1130298);
   Jets_cut_nJet__99->SetBinError(9,0.0549186);
   Jets_cut_nJet__99->SetBinError(10,0.02361401);
   Jets_cut_nJet__99->SetBinError(11,0.009137662);
   Jets_cut_nJet__99->SetBinError(13,0.004971806);
   Jets_cut_nJet__99->SetBinError(14,0.003244308);
   Jets_cut_nJet__99->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__99->SetLineColor(ci);
   Jets_cut_nJet__99->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__99->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__99->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__99->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__99->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__99->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__99->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__99->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__99->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__99->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__99->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__99->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__99->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__99->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__99->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet->Modified();
   nJet->cd();
   nJet->SetSelected(nJet);
}
