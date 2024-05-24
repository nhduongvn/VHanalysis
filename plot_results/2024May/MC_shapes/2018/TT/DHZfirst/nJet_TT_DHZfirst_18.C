#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_TT_DHZfirst_18()
{
//=========Macro generated from canvas: nJet_TT_DHZfirst_18/nJet_TT_DHZfirst_18
//=========  (Fri May 24 12:33:56 2024) by ROOT version 6.28/10
   TCanvas *nJet_TT_DHZfirst_18 = new TCanvas("nJet_TT_DHZfirst_18", "nJet_TT_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_TT_DHZfirst_18->SetHighLightColor(2);
   nJet_TT_DHZfirst_18->Range(-3.3,-2173509,15.36667,1.956158e+07);
   nJet_TT_DHZfirst_18->SetFillColor(0);
   nJet_TT_DHZfirst_18->SetFillStyle(4000);
   nJet_TT_DHZfirst_18->SetBorderMode(0);
   nJet_TT_DHZfirst_18->SetBorderSize(2);
   nJet_TT_DHZfirst_18->SetLeftMargin(0.15);
   nJet_TT_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_18->SetFrameBorderMode(0);
   nJet_TT_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5898 = new TH1D("Jets_cut_nJet__5898","",14,-0.5,13.5);
   Jets_cut_nJet__5898->SetBinContent(1,1455235);
   Jets_cut_nJet__5898->SetBinContent(2,5302392);
   Jets_cut_nJet__5898->SetBinContent(3,1.244444e+07);
   Jets_cut_nJet__5898->SetBinContent(4,1.656006e+07);
   Jets_cut_nJet__5898->SetBinContent(5,1.311656e+07);
   Jets_cut_nJet__5898->SetBinContent(6,6684315);
   Jets_cut_nJet__5898->SetBinContent(7,2509039);
   Jets_cut_nJet__5898->SetBinContent(8,761877.9);
   Jets_cut_nJet__5898->SetBinContent(9,202169.2);
   Jets_cut_nJet__5898->SetBinContent(10,48279.19);
   Jets_cut_nJet__5898->SetBinContent(11,10656.39);
   Jets_cut_nJet__5898->SetBinContent(12,2179.583);
   Jets_cut_nJet__5898->SetBinContent(13,409.7217);
   Jets_cut_nJet__5898->SetBinContent(14,84.81826);
   Jets_cut_nJet__5898->SetBinContent(15,16.28915);
   Jets_cut_nJet__5898->SetBinError(1,305.4738);
   Jets_cut_nJet__5898->SetBinError(2,590.7897);
   Jets_cut_nJet__5898->SetBinError(3,1002.974);
   Jets_cut_nJet__5898->SetBinError(4,1317.904);
   Jets_cut_nJet__5898->SetBinError(5,1312.291);
   Jets_cut_nJet__5898->SetBinError(6,1014.599);
   Jets_cut_nJet__5898->SetBinError(7,664.1233);
   Jets_cut_nJet__5898->SetBinError(8,384.2841);
   Jets_cut_nJet__5898->SetBinError(9,208.3919);
   Jets_cut_nJet__5898->SetBinError(10,110.8102);
   Jets_cut_nJet__5898->SetBinError(11,54.22505);
   Jets_cut_nJet__5898->SetBinError(12,24.43276);
   Jets_cut_nJet__5898->SetBinError(13,11.41968);
   Jets_cut_nJet__5898->SetBinError(14,4.985432);
   Jets_cut_nJet__5898->SetBinError(15,2.731111);
   Jets_cut_nJet__5898->SetEntries(8.5595e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5898->SetLineColor(ci);
   Jets_cut_nJet__5898->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5898->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5898->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5898->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5898->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5898->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5898->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5898->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5898->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5898->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5898->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5898->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5898->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5898->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5898->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_TT_DHZfirst_18->Modified();
   nJet_TT_DHZfirst_18->cd();
   nJet_TT_DHZfirst_18->SetSelected(nJet_TT_DHZfirst_18);
}
