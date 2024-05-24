#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WJets_DHZfirst_17_logY()
{
//=========Macro generated from canvas: nJet_WJets_DHZfirst_17/nJet_WJets_DHZfirst_17
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *nJet_WJets_DHZfirst_17 = new TCanvas("nJet_WJets_DHZfirst_17", "nJet_WJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WJets_DHZfirst_17->SetHighLightColor(2);
   nJet_WJets_DHZfirst_17->Range(-3.3,-1.349537,15.36667,9.048357);
   nJet_WJets_DHZfirst_17->SetFillColor(0);
   nJet_WJets_DHZfirst_17->SetFillStyle(4000);
   nJet_WJets_DHZfirst_17->SetBorderMode(0);
   nJet_WJets_DHZfirst_17->SetBorderSize(2);
   nJet_WJets_DHZfirst_17->SetLogy();
   nJet_WJets_DHZfirst_17->SetLeftMargin(0.15);
   nJet_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   nJet_WJets_DHZfirst_17->SetFrameBorderMode(0);
   nJet_WJets_DHZfirst_17->SetFrameFillStyle(1000);
   nJet_WJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5891 = new TH1D("Jets_cut_nJet__5891","",14,-0.5,13.5);
   Jets_cut_nJet__5891->SetBinContent(1,1.612062e+07);
   Jets_cut_nJet__5891->SetBinContent(2,4.657829e+07);
   Jets_cut_nJet__5891->SetBinContent(3,5.38293e+07);
   Jets_cut_nJet__5891->SetBinContent(4,2.362063e+07);
   Jets_cut_nJet__5891->SetBinContent(5,6656200);
   Jets_cut_nJet__5891->SetBinContent(6,1550039);
   Jets_cut_nJet__5891->SetBinContent(7,312559.6);
   Jets_cut_nJet__5891->SetBinContent(8,59847.5);
   Jets_cut_nJet__5891->SetBinContent(9,11007.58);
   Jets_cut_nJet__5891->SetBinContent(10,1882.82);
   Jets_cut_nJet__5891->SetBinContent(11,324.6821);
   Jets_cut_nJet__5891->SetBinContent(12,52.80632);
   Jets_cut_nJet__5891->SetBinContent(13,7.93967);
   Jets_cut_nJet__5891->SetBinContent(14,0.980128);
   Jets_cut_nJet__5891->SetBinContent(15,0.1097586);
   Jets_cut_nJet__5891->SetBinError(1,6417.416);
   Jets_cut_nJet__5891->SetBinError(2,11335.83);
   Jets_cut_nJet__5891->SetBinError(3,14514.65);
   Jets_cut_nJet__5891->SetBinError(4,9214.436);
   Jets_cut_nJet__5891->SetBinError(5,4126.852);
   Jets_cut_nJet__5891->SetBinError(6,1619.967);
   Jets_cut_nJet__5891->SetBinError(7,575.3314);
   Jets_cut_nJet__5891->SetBinError(8,203.5739);
   Jets_cut_nJet__5891->SetBinError(9,74.67125);
   Jets_cut_nJet__5891->SetBinError(10,21.52154);
   Jets_cut_nJet__5891->SetBinError(11,7.123575);
   Jets_cut_nJet__5891->SetBinError(12,2.930004);
   Jets_cut_nJet__5891->SetBinError(13,0.9462872);
   Jets_cut_nJet__5891->SetBinError(14,0.3081478);
   Jets_cut_nJet__5891->SetBinError(15,0.08028177);
   Jets_cut_nJet__5891->SetEntries(1.628249e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5891->SetLineColor(ci);
   Jets_cut_nJet__5891->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5891->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5891->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5891->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5891->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5891->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5891->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5891->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5891->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5891->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5891->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5891->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5891->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5891->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5891->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WJets_DHZfirst_17->Modified();
   nJet_WJets_DHZfirst_17->cd();
   nJet_WJets_DHZfirst_17->SetSelected(nJet_WJets_DHZfirst_17);
}
