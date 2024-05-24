#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WJets_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nC_medium_WJets_tagOnly_2b1c_17/nC_medium_WJets_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WJets_tagOnly_2b1c_17 = new TCanvas("nC_medium_WJets_tagOnly_2b1c_17", "nC_medium_WJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WJets_tagOnly_2b1c_17->SetHighLightColor(2);
   nC_medium_WJets_tagOnly_2b1c_17->Range(-2.5,-1.108053e+07,10.83333,9.972476e+07);
   nC_medium_WJets_tagOnly_2b1c_17->SetFillColor(0);
   nC_medium_WJets_tagOnly_2b1c_17->SetFillStyle(4000);
   nC_medium_WJets_tagOnly_2b1c_17->SetBorderMode(0);
   nC_medium_WJets_tagOnly_2b1c_17->SetBorderSize(2);
   nC_medium_WJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nC_medium_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nC_medium_WJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_WJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7601 = new TH1D("Jets_cut_nC_medium__7601","",10,-0.5,9.5);
   Jets_cut_nC_medium__7601->SetBinContent(1,8.442307e+07);
   Jets_cut_nC_medium__7601->SetBinContent(2,5.061854e+07);
   Jets_cut_nC_medium__7601->SetBinContent(3,1.21157e+07);
   Jets_cut_nC_medium__7601->SetBinContent(4,1451851);
   Jets_cut_nC_medium__7601->SetBinContent(5,122083.9);
   Jets_cut_nC_medium__7601->SetBinContent(6,8936.025);
   Jets_cut_nC_medium__7601->SetBinContent(7,539.8918);
   Jets_cut_nC_medium__7601->SetBinContent(8,35.57679);
   Jets_cut_nC_medium__7601->SetBinContent(9,2.779147);
   Jets_cut_nC_medium__7601->SetBinContent(10,0.04964292);
   Jets_cut_nC_medium__7601->SetBinError(1,16004.73);
   Jets_cut_nC_medium__7601->SetBinError(2,13380.93);
   Jets_cut_nC_medium__7601->SetBinError(3,6737.349);
   Jets_cut_nC_medium__7601->SetBinError(4,2107.878);
   Jets_cut_nC_medium__7601->SetBinError(5,500.704);
   Jets_cut_nC_medium__7601->SetBinError(6,110.7922);
   Jets_cut_nC_medium__7601->SetBinError(7,15.19703);
   Jets_cut_nC_medium__7601->SetBinError(8,3.788753);
   Jets_cut_nC_medium__7601->SetBinError(9,0.7754929);
   Jets_cut_nC_medium__7601->SetBinError(10,0.04964292);
   Jets_cut_nC_medium__7601->SetEntries(1.628249e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7601->SetLineColor(ci);
   Jets_cut_nC_medium__7601->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7601->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7601->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7601->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7601->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7601->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7601->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7601->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7601->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7601->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7601->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7601->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7601->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7601->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7601->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WJets_tagOnly_2b1c_17->Modified();
   nC_medium_WJets_tagOnly_2b1c_17->cd();
   nC_medium_WJets_tagOnly_2b1c_17->SetSelected(nC_medium_WJets_tagOnly_2b1c_17);
}
