#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WJets_tagOnly_16()
{
//=========Macro generated from canvas: nC_medium_WJets_tagOnly_16/nC_medium_WJets_tagOnly_16
//=========  (Fri May 24 12:43:31 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WJets_tagOnly_16 = new TCanvas("nC_medium_WJets_tagOnly_16", "nC_medium_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WJets_tagOnly_16->SetHighLightColor(2);
   nC_medium_WJets_tagOnly_16->Range(-2.5,-2.179741e+07,10.83333,1.961767e+08);
   nC_medium_WJets_tagOnly_16->SetFillColor(0);
   nC_medium_WJets_tagOnly_16->SetFillStyle(4000);
   nC_medium_WJets_tagOnly_16->SetBorderMode(0);
   nC_medium_WJets_tagOnly_16->SetBorderSize(2);
   nC_medium_WJets_tagOnly_16->SetLeftMargin(0.15);
   nC_medium_WJets_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WJets_tagOnly_16->SetFrameBorderMode(0);
   nC_medium_WJets_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__5260 = new TH1D("Jets_cut_nC_medium__5260","",10,-0.5,9.5);
   Jets_cut_nC_medium__5260->SetBinContent(1,1.660755e+08);
   Jets_cut_nC_medium__5260->SetBinContent(2,7.34533e+07);
   Jets_cut_nC_medium__5260->SetBinContent(3,1.276705e+07);
   Jets_cut_nC_medium__5260->SetBinContent(4,1197339);
   Jets_cut_nC_medium__5260->SetBinContent(5,94269.51);
   Jets_cut_nC_medium__5260->SetBinContent(6,6588.403);
   Jets_cut_nC_medium__5260->SetBinContent(7,422.5724);
   Jets_cut_nC_medium__5260->SetBinContent(8,30.26563);
   Jets_cut_nC_medium__5260->SetBinContent(9,1.773113);
   Jets_cut_nC_medium__5260->SetBinContent(10,0.0702976);
   Jets_cut_nC_medium__5260->SetBinContent(11,0.000192742);
   Jets_cut_nC_medium__5260->SetBinError(1,38608.59);
   Jets_cut_nC_medium__5260->SetBinError(2,26185.02);
   Jets_cut_nC_medium__5260->SetBinError(3,10321.39);
   Jets_cut_nC_medium__5260->SetBinError(4,2052.029);
   Jets_cut_nC_medium__5260->SetBinError(5,372.5358);
   Jets_cut_nC_medium__5260->SetBinError(6,73.61206);
   Jets_cut_nC_medium__5260->SetBinError(7,13.76949);
   Jets_cut_nC_medium__5260->SetBinError(8,2.858113);
   Jets_cut_nC_medium__5260->SetBinError(9,0.4657459);
   Jets_cut_nC_medium__5260->SetBinError(10,0.06954873);
   Jets_cut_nC_medium__5260->SetBinError(11,0.000192742);
   Jets_cut_nC_medium__5260->SetEntries(1.506675e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__5260->SetLineColor(ci);
   Jets_cut_nC_medium__5260->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__5260->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__5260->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5260->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5260->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5260->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__5260->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5260->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__5260->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__5260->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__5260->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5260->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5260->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5260->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5260->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WJets_tagOnly_16->Modified();
   nC_medium_WJets_tagOnly_16->cd();
   nC_medium_WJets_tagOnly_16->SetSelected(nC_medium_WJets_tagOnly_16);
}
