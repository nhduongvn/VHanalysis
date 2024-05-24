#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WZ_tagFirst_16_logY()
{
//=========Macro generated from canvas: nJet_WZ_tagFirst_16/nJet_WZ_tagFirst_16
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *nJet_WZ_tagFirst_16 = new TCanvas("nJet_WZ_tagFirst_16", "nJet_WZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WZ_tagFirst_16->SetHighLightColor(2);
   nJet_WZ_tagFirst_16->Range(-3.3,-1.550517,15.36667,7.538382);
   nJet_WZ_tagFirst_16->SetFillColor(0);
   nJet_WZ_tagFirst_16->SetFillStyle(4000);
   nJet_WZ_tagFirst_16->SetBorderMode(0);
   nJet_WZ_tagFirst_16->SetBorderSize(2);
   nJet_WZ_tagFirst_16->SetLogy();
   nJet_WZ_tagFirst_16->SetLeftMargin(0.15);
   nJet_WZ_tagFirst_16->SetFrameFillStyle(1000);
   nJet_WZ_tagFirst_16->SetFrameBorderMode(0);
   nJet_WZ_tagFirst_16->SetFrameFillStyle(1000);
   nJet_WZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4345 = new TH1D("Jets_cut_nJet__4345","",14,-0.5,13.5);
   Jets_cut_nJet__4345->SetBinContent(1,2248759);
   Jets_cut_nJet__4345->SetBinContent(2,1597324);
   Jets_cut_nJet__4345->SetBinContent(3,578001.9);
   Jets_cut_nJet__4345->SetBinContent(4,98331.93);
   Jets_cut_nJet__4345->SetBinContent(5,26220.68);
   Jets_cut_nJet__4345->SetBinContent(6,5998.912);
   Jets_cut_nJet__4345->SetBinContent(7,1168.328);
   Jets_cut_nJet__4345->SetBinContent(8,196.7004);
   Jets_cut_nJet__4345->SetBinContent(9,27.58458);
   Jets_cut_nJet__4345->SetBinContent(10,4.701989);
   Jets_cut_nJet__4345->SetBinContent(11,0.4564604);
   Jets_cut_nJet__4345->SetBinError(1,1055.374);
   Jets_cut_nJet__4345->SetBinError(2,905.135);
   Jets_cut_nJet__4345->SetBinError(3,507.2592);
   Jets_cut_nJet__4345->SetBinError(4,137.0573);
   Jets_cut_nJet__4345->SetBinError(5,47.34644);
   Jets_cut_nJet__4345->SetBinError(6,23.3385);
   Jets_cut_nJet__4345->SetBinError(7,10.5825);
   Jets_cut_nJet__4345->SetBinError(8,4.414967);
   Jets_cut_nJet__4345->SetBinError(9,1.700562);
   Jets_cut_nJet__4345->SetBinError(10,0.7192441);
   Jets_cut_nJet__4345->SetBinError(11,0.2291108);
   Jets_cut_nJet__4345->SetEntries(1.5518e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4345->SetLineColor(ci);
   Jets_cut_nJet__4345->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4345->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4345->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4345->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4345->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4345->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4345->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4345->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4345->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4345->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4345->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4345->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4345->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4345->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4345->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WZ_tagFirst_16->Modified();
   nJet_WZ_tagFirst_16->cd();
   nJet_WZ_tagFirst_16->SetSelected(nJet_WZ_tagFirst_16);
}
