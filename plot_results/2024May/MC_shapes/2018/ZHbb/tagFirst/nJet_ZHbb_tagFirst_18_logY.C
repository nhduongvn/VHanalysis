#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHbb_tagFirst_18_logY()
{
//=========Macro generated from canvas: nJet_ZHbb_tagFirst_18/nJet_ZHbb_tagFirst_18
//=========  (Fri May 24 12:43:12 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHbb_tagFirst_18 = new TCanvas("nJet_ZHbb_tagFirst_18", "nJet_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHbb_tagFirst_18->SetHighLightColor(2);
   nJet_ZHbb_tagFirst_18->Range(-3.3,-4.550694,15.36667,5.048984);
   nJet_ZHbb_tagFirst_18->SetFillColor(0);
   nJet_ZHbb_tagFirst_18->SetFillStyle(4000);
   nJet_ZHbb_tagFirst_18->SetBorderMode(0);
   nJet_ZHbb_tagFirst_18->SetBorderSize(2);
   nJet_ZHbb_tagFirst_18->SetLogy();
   nJet_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   nJet_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   nJet_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   nJet_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   nJet_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4326 = new TH1D("Jets_cut_nJet__4326","",14,-0.5,13.5);
   Jets_cut_nJet__4326->SetBinContent(1,3472.645);
   Jets_cut_nJet__4326->SetBinContent(2,4444.91);
   Jets_cut_nJet__4326->SetBinContent(3,6478.39);
   Jets_cut_nJet__4326->SetBinContent(4,5282.465);
   Jets_cut_nJet__4326->SetBinContent(5,3125.211);
   Jets_cut_nJet__4326->SetBinContent(6,1048.316);
   Jets_cut_nJet__4326->SetBinContent(7,298.1793);
   Jets_cut_nJet__4326->SetBinContent(8,76.30153);
   Jets_cut_nJet__4326->SetBinContent(9,17.29786);
   Jets_cut_nJet__4326->SetBinContent(10,4.014458);
   Jets_cut_nJet__4326->SetBinContent(11,0.7593072);
   Jets_cut_nJet__4326->SetBinContent(12,0.1567785);
   Jets_cut_nJet__4326->SetBinContent(13,0.04660253);
   Jets_cut_nJet__4326->SetBinContent(14,0.0005132208);
   Jets_cut_nJet__4326->SetBinContent(15,0.0005795521);
   Jets_cut_nJet__4326->SetBinError(1,3.170137);
   Jets_cut_nJet__4326->SetBinError(2,3.512309);
   Jets_cut_nJet__4326->SetBinError(3,4.06979);
   Jets_cut_nJet__4326->SetBinError(4,3.87265);
   Jets_cut_nJet__4326->SetBinError(5,3.291909);
   Jets_cut_nJet__4326->SetBinError(6,1.963779);
   Jets_cut_nJet__4326->SetBinError(7,1.105751);
   Jets_cut_nJet__4326->SetBinError(8,0.612483);
   Jets_cut_nJet__4326->SetBinError(9,0.2762256);
   Jets_cut_nJet__4326->SetBinError(10,0.1537779);
   Jets_cut_nJet__4326->SetBinError(11,0.05600934);
   Jets_cut_nJet__4326->SetBinError(12,0.0250088);
   Jets_cut_nJet__4326->SetBinError(13,0.02316254);
   Jets_cut_nJet__4326->SetBinError(14,0.0005132208);
   Jets_cut_nJet__4326->SetBinError(15,0.0005795521);
   Jets_cut_nJet__4326->SetEntries(1.488426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4326->SetLineColor(ci);
   Jets_cut_nJet__4326->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4326->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4326->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4326->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4326->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4326->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4326->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4326->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4326->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4326->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4326->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4326->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4326->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4326->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4326->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHbb_tagFirst_18->Modified();
   nJet_ZHbb_tagFirst_18->cd();
   nJet_ZHbb_tagFirst_18->SetSelected(nJet_ZHbb_tagFirst_18);
}
