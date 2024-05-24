#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZJets_tagFirst_16()
{
//=========Macro generated from canvas: nJet_ZJets_tagFirst_16/nJet_ZJets_tagFirst_16
//=========  (Fri May 24 12:33:23 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZJets_tagFirst_16 = new TCanvas("nJet_ZJets_tagFirst_16", "nJet_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZJets_tagFirst_16->SetHighLightColor(2);
   nJet_ZJets_tagFirst_16->Range(-3.3,-2534911,15.36667,2.281419e+07);
   nJet_ZJets_tagFirst_16->SetFillColor(0);
   nJet_ZJets_tagFirst_16->SetFillStyle(4000);
   nJet_ZJets_tagFirst_16->SetBorderMode(0);
   nJet_ZJets_tagFirst_16->SetBorderSize(2);
   nJet_ZJets_tagFirst_16->SetLeftMargin(0.15);
   nJet_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_16->SetFrameBorderMode(0);
   nJet_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4333 = new TH1D("Jets_cut_nJet__4333","",14,-0.5,13.5);
   Jets_cut_nJet__4333->SetBinContent(1,4516865);
   Jets_cut_nJet__4333->SetBinContent(2,1.149475e+07);
   Jets_cut_nJet__4333->SetBinContent(3,1.93136e+07);
   Jets_cut_nJet__4333->SetBinContent(4,7208732);
   Jets_cut_nJet__4333->SetBinContent(5,1833710);
   Jets_cut_nJet__4333->SetBinContent(6,440640.9);
   Jets_cut_nJet__4333->SetBinContent(7,99577.69);
   Jets_cut_nJet__4333->SetBinContent(8,20217.84);
   Jets_cut_nJet__4333->SetBinContent(9,3941.384);
   Jets_cut_nJet__4333->SetBinContent(10,720.1006);
   Jets_cut_nJet__4333->SetBinContent(11,124.2719);
   Jets_cut_nJet__4333->SetBinContent(12,20.65999);
   Jets_cut_nJet__4333->SetBinContent(13,4.403051);
   Jets_cut_nJet__4333->SetBinContent(14,0.4012311);
   Jets_cut_nJet__4333->SetBinContent(15,0.2275789);
   Jets_cut_nJet__4333->SetBinError(1,6995.052);
   Jets_cut_nJet__4333->SetBinError(2,10401.39);
   Jets_cut_nJet__4333->SetBinError(3,11830.75);
   Jets_cut_nJet__4333->SetBinError(4,4478.139);
   Jets_cut_nJet__4333->SetBinError(5,1311.514);
   Jets_cut_nJet__4333->SetBinError(6,434.9653);
   Jets_cut_nJet__4333->SetBinError(7,143.3075);
   Jets_cut_nJet__4333->SetBinError(8,49.87461);
   Jets_cut_nJet__4333->SetBinError(9,18.94434);
   Jets_cut_nJet__4333->SetBinError(10,7.904454);
   Jets_cut_nJet__4333->SetBinError(11,3.085277);
   Jets_cut_nJet__4333->SetBinError(12,1.234177);
   Jets_cut_nJet__4333->SetBinError(13,0.5814037);
   Jets_cut_nJet__4333->SetBinError(14,0.1700013);
   Jets_cut_nJet__4333->SetBinError(15,0.1649008);
   Jets_cut_nJet__4333->SetEntries(4.758213e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4333->SetLineColor(ci);
   Jets_cut_nJet__4333->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4333->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4333->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4333->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4333->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4333->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4333->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4333->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4333->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4333->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4333->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4333->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4333->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4333->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4333->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZJets_tagFirst_16->Modified();
   nJet_ZJets_tagFirst_16->cd();
   nJet_ZJets_tagFirst_16->SetSelected(nJet_ZJets_tagFirst_16);
}
