#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WJets_tagOnly_17_logY()
{
//=========Macro generated from canvas: nJet_WJets_tagOnly_17/nJet_WJets_tagOnly_17
//=========  (Fri May 24 12:43:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_WJets_tagOnly_17 = new TCanvas("nJet_WJets_tagOnly_17", "nJet_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WJets_tagOnly_17->SetHighLightColor(2);
   nJet_WJets_tagOnly_17->Range(-3.3,-1.349537,15.36667,9.048357);
   nJet_WJets_tagOnly_17->SetFillColor(0);
   nJet_WJets_tagOnly_17->SetFillStyle(4000);
   nJet_WJets_tagOnly_17->SetBorderMode(0);
   nJet_WJets_tagOnly_17->SetBorderSize(2);
   nJet_WJets_tagOnly_17->SetLogy();
   nJet_WJets_tagOnly_17->SetLeftMargin(0.15);
   nJet_WJets_tagOnly_17->SetFrameFillStyle(1000);
   nJet_WJets_tagOnly_17->SetFrameBorderMode(0);
   nJet_WJets_tagOnly_17->SetFrameFillStyle(1000);
   nJet_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5111 = new TH1D("Jets_cut_nJet__5111","",14,-0.5,13.5);
   Jets_cut_nJet__5111->SetBinContent(1,1.612062e+07);
   Jets_cut_nJet__5111->SetBinContent(2,4.657829e+07);
   Jets_cut_nJet__5111->SetBinContent(3,5.38293e+07);
   Jets_cut_nJet__5111->SetBinContent(4,2.362063e+07);
   Jets_cut_nJet__5111->SetBinContent(5,6656200);
   Jets_cut_nJet__5111->SetBinContent(6,1550039);
   Jets_cut_nJet__5111->SetBinContent(7,312559.6);
   Jets_cut_nJet__5111->SetBinContent(8,59847.5);
   Jets_cut_nJet__5111->SetBinContent(9,11007.58);
   Jets_cut_nJet__5111->SetBinContent(10,1882.82);
   Jets_cut_nJet__5111->SetBinContent(11,324.6821);
   Jets_cut_nJet__5111->SetBinContent(12,52.80632);
   Jets_cut_nJet__5111->SetBinContent(13,7.93967);
   Jets_cut_nJet__5111->SetBinContent(14,0.980128);
   Jets_cut_nJet__5111->SetBinContent(15,0.1097586);
   Jets_cut_nJet__5111->SetBinError(1,6417.416);
   Jets_cut_nJet__5111->SetBinError(2,11335.83);
   Jets_cut_nJet__5111->SetBinError(3,14514.65);
   Jets_cut_nJet__5111->SetBinError(4,9214.436);
   Jets_cut_nJet__5111->SetBinError(5,4126.852);
   Jets_cut_nJet__5111->SetBinError(6,1619.967);
   Jets_cut_nJet__5111->SetBinError(7,575.3314);
   Jets_cut_nJet__5111->SetBinError(8,203.5739);
   Jets_cut_nJet__5111->SetBinError(9,74.67125);
   Jets_cut_nJet__5111->SetBinError(10,21.52154);
   Jets_cut_nJet__5111->SetBinError(11,7.123575);
   Jets_cut_nJet__5111->SetBinError(12,2.930004);
   Jets_cut_nJet__5111->SetBinError(13,0.9462872);
   Jets_cut_nJet__5111->SetBinError(14,0.3081478);
   Jets_cut_nJet__5111->SetBinError(15,0.08028177);
   Jets_cut_nJet__5111->SetEntries(1.628249e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5111->SetLineColor(ci);
   Jets_cut_nJet__5111->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5111->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5111->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5111->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5111->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5111->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5111->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5111->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5111->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5111->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5111->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5111->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5111->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5111->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5111->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WJets_tagOnly_17->Modified();
   nJet_WJets_tagOnly_17->cd();
   nJet_WJets_tagOnly_17->SetSelected(nJet_WJets_tagOnly_17);
}
