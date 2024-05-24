#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WW_tagOnly_17()
{
//=========Macro generated from canvas: nC_medium_WW_tagOnly_17/nC_medium_WW_tagOnly_17
//=========  (Fri May 24 12:43:31 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WW_tagOnly_17 = new TCanvas("nC_medium_WW_tagOnly_17", "nC_medium_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WW_tagOnly_17->SetHighLightColor(2);
   nC_medium_WW_tagOnly_17->Range(-2.5,-446957.2,10.83333,4022615);
   nC_medium_WW_tagOnly_17->SetFillColor(0);
   nC_medium_WW_tagOnly_17->SetFillStyle(4000);
   nC_medium_WW_tagOnly_17->SetBorderMode(0);
   nC_medium_WW_tagOnly_17->SetBorderSize(2);
   nC_medium_WW_tagOnly_17->SetLeftMargin(0.15);
   nC_medium_WW_tagOnly_17->SetFrameFillStyle(1000);
   nC_medium_WW_tagOnly_17->SetFrameBorderMode(0);
   nC_medium_WW_tagOnly_17->SetFrameFillStyle(1000);
   nC_medium_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__5273 = new TH1D("Jets_cut_nC_medium__5273","",10,-0.5,9.5);
   Jets_cut_nC_medium__5273->SetBinContent(1,3405388);
   Jets_cut_nC_medium__5273->SetBinContent(2,874883.4);
   Jets_cut_nC_medium__5273->SetBinContent(3,149407.9);
   Jets_cut_nC_medium__5273->SetBinContent(4,17059.04);
   Jets_cut_nC_medium__5273->SetBinContent(5,1609.025);
   Jets_cut_nC_medium__5273->SetBinContent(6,122.2398);
   Jets_cut_nC_medium__5273->SetBinContent(7,5.056887);
   Jets_cut_nC_medium__5273->SetBinError(1,1039.153);
   Jets_cut_nC_medium__5273->SetBinError(2,519.2491);
   Jets_cut_nC_medium__5273->SetBinError(3,212.4533);
   Jets_cut_nC_medium__5273->SetBinError(4,73.17149);
   Jets_cut_nC_medium__5273->SetBinError(5,24.03366);
   Jets_cut_nC_medium__5273->SetBinError(6,7.006046);
   Jets_cut_nC_medium__5273->SetBinError(7,1.48065);
   Jets_cut_nC_medium__5273->SetEntries(1.5634e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__5273->SetLineColor(ci);
   Jets_cut_nC_medium__5273->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__5273->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__5273->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5273->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5273->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5273->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__5273->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5273->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__5273->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__5273->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__5273->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5273->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5273->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5273->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5273->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WW_tagOnly_17->Modified();
   nC_medium_WW_tagOnly_17->cd();
   nC_medium_WW_tagOnly_17->SetSelected(nC_medium_WW_tagOnly_17);
}
