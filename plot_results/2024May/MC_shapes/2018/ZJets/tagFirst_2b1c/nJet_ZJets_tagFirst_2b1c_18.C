#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZJets_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: nJet_ZJets_tagFirst_2b1c_18/nJet_ZJets_tagFirst_2b1c_18
//=========  (Fri May 24 12:34:11 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZJets_tagFirst_2b1c_18 = new TCanvas("nJet_ZJets_tagFirst_2b1c_18", "nJet_ZJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZJets_tagFirst_2b1c_18->SetHighLightColor(2);
   nJet_ZJets_tagFirst_2b1c_18->Range(-3.3,-3428600,15.36667,3.08574e+07);
   nJet_ZJets_tagFirst_2b1c_18->SetFillColor(0);
   nJet_ZJets_tagFirst_2b1c_18->SetFillStyle(4000);
   nJet_ZJets_tagFirst_2b1c_18->SetBorderMode(0);
   nJet_ZJets_tagFirst_2b1c_18->SetBorderSize(2);
   nJet_ZJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   nJet_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   nJet_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6675 = new TH1D("Jets_cut_nJet__6675","",14,-0.5,13.5);
   Jets_cut_nJet__6675->SetBinContent(1,3385378);
   Jets_cut_nJet__6675->SetBinContent(2,1.141945e+07);
   Jets_cut_nJet__6675->SetBinContent(3,2.612267e+07);
   Jets_cut_nJet__6675->SetBinContent(4,1.656359e+07);
   Jets_cut_nJet__6675->SetBinContent(5,5450673);
   Jets_cut_nJet__6675->SetBinContent(6,1389630);
   Jets_cut_nJet__6675->SetBinContent(7,315352.4);
   Jets_cut_nJet__6675->SetBinContent(8,63982.96);
   Jets_cut_nJet__6675->SetBinContent(9,12486.87);
   Jets_cut_nJet__6675->SetBinContent(10,2345.31);
   Jets_cut_nJet__6675->SetBinContent(11,407.5224);
   Jets_cut_nJet__6675->SetBinContent(12,71.03349);
   Jets_cut_nJet__6675->SetBinContent(13,10.88483);
   Jets_cut_nJet__6675->SetBinContent(14,2.234043);
   Jets_cut_nJet__6675->SetBinContent(15,0.1762772);
   Jets_cut_nJet__6675->SetBinError(1,3961.584);
   Jets_cut_nJet__6675->SetBinError(2,7105.001);
   Jets_cut_nJet__6675->SetBinError(3,10552.63);
   Jets_cut_nJet__6675->SetBinError(4,8031.817);
   Jets_cut_nJet__6675->SetBinError(5,4172.834);
   Jets_cut_nJet__6675->SetBinError(6,1601.125);
   Jets_cut_nJet__6675->SetBinError(7,552.8438);
   Jets_cut_nJet__6675->SetBinError(8,209.609);
   Jets_cut_nJet__6675->SetBinError(9,72.34785);
   Jets_cut_nJet__6675->SetBinError(10,30.21561);
   Jets_cut_nJet__6675->SetBinError(11,11.64127);
   Jets_cut_nJet__6675->SetBinError(12,5.226564);
   Jets_cut_nJet__6675->SetBinError(13,1.937877);
   Jets_cut_nJet__6675->SetBinError(14,1.240928);
   Jets_cut_nJet__6675->SetBinError(15,0.1254345);
   Jets_cut_nJet__6675->SetEntries(5.064426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6675->SetLineColor(ci);
   Jets_cut_nJet__6675->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6675->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6675->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6675->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6675->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6675->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6675->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6675->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6675->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6675->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6675->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6675->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6675->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6675->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6675->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZJets_tagFirst_2b1c_18->Modified();
   nJet_ZJets_tagFirst_2b1c_18->cd();
   nJet_ZJets_tagFirst_2b1c_18->SetSelected(nJet_ZJets_tagFirst_2b1c_18);
}
