#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WJets_tagOnly_18()
{
//=========Macro generated from canvas: nJet_WJets_tagOnly_18/nJet_WJets_tagOnly_18
//=========  (Fri May 24 12:33:40 2024) by ROOT version 6.28/10
   TCanvas *nJet_WJets_tagOnly_18 = new TCanvas("nJet_WJets_tagOnly_18", "nJet_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WJets_tagOnly_18->SetHighLightColor(2);
   nJet_WJets_tagOnly_18->Range(-3.3,-1.238588e+07,15.36667,1.114729e+08);
   nJet_WJets_tagOnly_18->SetFillColor(0);
   nJet_WJets_tagOnly_18->SetFillStyle(4000);
   nJet_WJets_tagOnly_18->SetBorderMode(0);
   nJet_WJets_tagOnly_18->SetBorderSize(2);
   nJet_WJets_tagOnly_18->SetLeftMargin(0.15);
   nJet_WJets_tagOnly_18->SetFrameFillStyle(1000);
   nJet_WJets_tagOnly_18->SetFrameBorderMode(0);
   nJet_WJets_tagOnly_18->SetFrameFillStyle(1000);
   nJet_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5112 = new TH1D("Jets_cut_nJet__5112","",14,-0.5,13.5);
   Jets_cut_nJet__5112->SetBinContent(1,2.603092e+07);
   Jets_cut_nJet__5112->SetBinContent(2,7.573644e+07);
   Jets_cut_nJet__5112->SetBinContent(3,9.436859e+07);
   Jets_cut_nJet__5112->SetBinContent(4,5.059489e+07);
   Jets_cut_nJet__5112->SetBinContent(5,1.60993e+07);
   Jets_cut_nJet__5112->SetBinContent(6,3785756);
   Jets_cut_nJet__5112->SetBinContent(7,755880.2);
   Jets_cut_nJet__5112->SetBinContent(8,143126.6);
   Jets_cut_nJet__5112->SetBinContent(9,25782.19);
   Jets_cut_nJet__5112->SetBinContent(10,4608.923);
   Jets_cut_nJet__5112->SetBinContent(11,753.8621);
   Jets_cut_nJet__5112->SetBinContent(12,136.1671);
   Jets_cut_nJet__5112->SetBinContent(13,20.46934);
   Jets_cut_nJet__5112->SetBinContent(14,2.055749);
   Jets_cut_nJet__5112->SetBinContent(15,2.041385);
   Jets_cut_nJet__5112->SetBinError(1,11473.41);
   Jets_cut_nJet__5112->SetBinError(2,20702.25);
   Jets_cut_nJet__5112->SetBinError(3,27985.64);
   Jets_cut_nJet__5112->SetBinError(4,21977.75);
   Jets_cut_nJet__5112->SetBinError(5,11844.5);
   Jets_cut_nJet__5112->SetBinError(6,5108.22);
   Jets_cut_nJet__5112->SetBinError(7,1837.67);
   Jets_cut_nJet__5112->SetBinError(8,583.2055);
   Jets_cut_nJet__5112->SetBinError(9,270.626);
   Jets_cut_nJet__5112->SetBinError(10,64.98219);
   Jets_cut_nJet__5112->SetBinError(11,21.31838);
   Jets_cut_nJet__5112->SetBinError(12,9.40049);
   Jets_cut_nJet__5112->SetBinError(13,3.734092);
   Jets_cut_nJet__5112->SetBinError(14,0.7255431);
   Jets_cut_nJet__5112->SetBinError(15,1.025683);
   Jets_cut_nJet__5112->SetEntries(1.903233e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5112->SetLineColor(ci);
   Jets_cut_nJet__5112->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5112->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5112->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5112->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5112->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5112->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5112->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5112->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5112->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5112->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5112->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5112->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5112->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5112->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5112->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WJets_tagOnly_18->Modified();
   nJet_WJets_tagOnly_18->cd();
   nJet_WJets_tagOnly_18->SetSelected(nJet_WJets_tagOnly_18);
}
