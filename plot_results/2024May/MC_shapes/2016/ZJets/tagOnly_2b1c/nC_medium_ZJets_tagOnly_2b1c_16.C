#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZJets_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: nC_medium_ZJets_tagOnly_2b1c_16/nC_medium_ZJets_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZJets_tagOnly_2b1c_16 = new TCanvas("nC_medium_ZJets_tagOnly_2b1c_16", "nC_medium_ZJets_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZJets_tagOnly_2b1c_16->SetHighLightColor(2);
   nC_medium_ZJets_tagOnly_2b1c_16->Range(-2.5,-3322754,10.83333,2.990478e+07);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFillColor(0);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFillStyle(4000);
   nC_medium_ZJets_tagOnly_2b1c_16->SetBorderMode(0);
   nC_medium_ZJets_tagOnly_2b1c_16->SetBorderSize(2);
   nC_medium_ZJets_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7603 = new TH1D("Jets_cut_nC_medium__7603","",10,-0.5,9.5);
   Jets_cut_nC_medium__7603->SetBinContent(1,2.531622e+07);
   Jets_cut_nC_medium__7603->SetBinContent(2,1.553279e+07);
   Jets_cut_nC_medium__7603->SetBinContent(3,3653315);
   Jets_cut_nC_medium__7603->SetBinContent(4,394828);
   Jets_cut_nC_medium__7603->SetBinContent(5,33018.92);
   Jets_cut_nC_medium__7603->SetBinContent(6,2545.578);
   Jets_cut_nC_medium__7603->SetBinContent(7,181.8386);
   Jets_cut_nC_medium__7603->SetBinContent(8,12.41887);
   Jets_cut_nC_medium__7603->SetBinContent(9,0.9200326);
   Jets_cut_nC_medium__7603->SetBinError(1,14127.16);
   Jets_cut_nC_medium__7603->SetBinError(2,10076.52);
   Jets_cut_nC_medium__7603->SetBinError(3,4155.307);
   Jets_cut_nC_medium__7603->SetBinError(4,821.9888);
   Jets_cut_nC_medium__7603->SetBinError(5,130.5056);
   Jets_cut_nC_medium__7603->SetBinError(6,22.58998);
   Jets_cut_nC_medium__7603->SetBinError(7,5.111247);
   Jets_cut_nC_medium__7603->SetBinError(8,1.038606);
   Jets_cut_nC_medium__7603->SetBinError(9,0.2779635);
   Jets_cut_nC_medium__7603->SetEntries(4.758213e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7603->SetLineColor(ci);
   Jets_cut_nC_medium__7603->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7603->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7603->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7603->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7603->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7603->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7603->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7603->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7603->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7603->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7603->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7603->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7603->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7603->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7603->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZJets_tagOnly_2b1c_16->Modified();
   nC_medium_ZJets_tagOnly_2b1c_16->cd();
   nC_medium_ZJets_tagOnly_2b1c_16->SetSelected(nC_medium_ZJets_tagOnly_2b1c_16);
}
