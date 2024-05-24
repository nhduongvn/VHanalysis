#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHcc_tagFirst_17_logY()
{
//=========Macro generated from canvas: nJet_ZHcc_tagFirst_17/nJet_ZHcc_tagFirst_17
//=========  (Fri May 24 12:43:12 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHcc_tagFirst_17 = new TCanvas("nJet_ZHcc_tagFirst_17", "nJet_ZHcc_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHcc_tagFirst_17->SetHighLightColor(2);
   nJet_ZHcc_tagFirst_17->Range(-3.3,-3.322628,15.36667,3.200925);
   nJet_ZHcc_tagFirst_17->SetFillColor(0);
   nJet_ZHcc_tagFirst_17->SetFillStyle(4000);
   nJet_ZHcc_tagFirst_17->SetBorderMode(0);
   nJet_ZHcc_tagFirst_17->SetBorderSize(2);
   nJet_ZHcc_tagFirst_17->SetLogy();
   nJet_ZHcc_tagFirst_17->SetLeftMargin(0.15);
   nJet_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   nJet_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   nJet_ZHcc_tagFirst_17->SetFrameFillStyle(1000);
   nJet_ZHcc_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4322 = new TH1D("Jets_cut_nJet__4322","",14,-0.5,13.5);
   Jets_cut_nJet__4322->SetBinContent(1,91.72238);
   Jets_cut_nJet__4322->SetBinContent(2,123.0959);
   Jets_cut_nJet__4322->SetBinContent(3,186.647);
   Jets_cut_nJet__4322->SetBinContent(4,137.3143);
   Jets_cut_nJet__4322->SetBinContent(5,76.30515);
   Jets_cut_nJet__4322->SetBinContent(6,25.98937);
   Jets_cut_nJet__4322->SetBinContent(7,7.360062);
   Jets_cut_nJet__4322->SetBinContent(8,1.833758);
   Jets_cut_nJet__4322->SetBinContent(9,0.3804631);
   Jets_cut_nJet__4322->SetBinContent(10,0.08244529);
   Jets_cut_nJet__4322->SetBinContent(11,0.007462138);
   Jets_cut_nJet__4322->SetBinContent(12,0.004273241);
   Jets_cut_nJet__4322->SetBinError(1,0.3612977);
   Jets_cut_nJet__4322->SetBinError(2,0.4048365);
   Jets_cut_nJet__4322->SetBinError(3,0.4711885);
   Jets_cut_nJet__4322->SetBinError(4,0.373215);
   Jets_cut_nJet__4322->SetBinError(5,0.2750999);
   Jets_cut_nJet__4322->SetBinError(6,0.160988);
   Jets_cut_nJet__4322->SetBinError(7,0.08786491);
   Jets_cut_nJet__4322->SetBinError(8,0.04677841);
   Jets_cut_nJet__4322->SetBinError(9,0.02163925);
   Jets_cut_nJet__4322->SetBinError(10,0.009864062);
   Jets_cut_nJet__4322->SetBinError(11,0.002185974);
   Jets_cut_nJet__4322->SetBinError(12,0.002208205);
   Jets_cut_nJet__4322->SetEntries(995710);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4322->SetLineColor(ci);
   Jets_cut_nJet__4322->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4322->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4322->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4322->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4322->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4322->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4322->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4322->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4322->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4322->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4322->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4322->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4322->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4322->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4322->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHcc_tagFirst_17->Modified();
   nJet_ZHcc_tagFirst_17->cd();
   nJet_ZHcc_tagFirst_17->SetSelected(nJet_ZHcc_tagFirst_17);
}
