#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZJets_tagFirst_18_logY()
{
//=========Macro generated from canvas: nJet_ZJets_tagFirst_18/nJet_ZJets_tagFirst_18
//=========  (Fri May 24 12:43:12 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZJets_tagFirst_18 = new TCanvas("nJet_ZJets_tagFirst_18", "nJet_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZJets_tagFirst_18->SetHighLightColor(2);
   nJet_ZJets_tagFirst_18->Range(-3.3,-0.9077517,15.36667,8.65038);
   nJet_ZJets_tagFirst_18->SetFillColor(0);
   nJet_ZJets_tagFirst_18->SetFillStyle(4000);
   nJet_ZJets_tagFirst_18->SetBorderMode(0);
   nJet_ZJets_tagFirst_18->SetBorderSize(2);
   nJet_ZJets_tagFirst_18->SetLogy();
   nJet_ZJets_tagFirst_18->SetLeftMargin(0.15);
   nJet_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_18->SetFrameBorderMode(0);
   nJet_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__4335 = new TH1D("Jets_cut_nJet__4335","",14,-0.5,13.5);
   Jets_cut_nJet__4335->SetBinContent(1,3385378);
   Jets_cut_nJet__4335->SetBinContent(2,1.141945e+07);
   Jets_cut_nJet__4335->SetBinContent(3,2.612267e+07);
   Jets_cut_nJet__4335->SetBinContent(4,1.656359e+07);
   Jets_cut_nJet__4335->SetBinContent(5,5450673);
   Jets_cut_nJet__4335->SetBinContent(6,1389630);
   Jets_cut_nJet__4335->SetBinContent(7,315352.4);
   Jets_cut_nJet__4335->SetBinContent(8,63982.96);
   Jets_cut_nJet__4335->SetBinContent(9,12486.87);
   Jets_cut_nJet__4335->SetBinContent(10,2345.31);
   Jets_cut_nJet__4335->SetBinContent(11,407.5224);
   Jets_cut_nJet__4335->SetBinContent(12,71.03349);
   Jets_cut_nJet__4335->SetBinContent(13,10.88483);
   Jets_cut_nJet__4335->SetBinContent(14,2.234043);
   Jets_cut_nJet__4335->SetBinContent(15,0.1762772);
   Jets_cut_nJet__4335->SetBinError(1,3961.584);
   Jets_cut_nJet__4335->SetBinError(2,7105.001);
   Jets_cut_nJet__4335->SetBinError(3,10552.63);
   Jets_cut_nJet__4335->SetBinError(4,8031.817);
   Jets_cut_nJet__4335->SetBinError(5,4172.834);
   Jets_cut_nJet__4335->SetBinError(6,1601.125);
   Jets_cut_nJet__4335->SetBinError(7,552.8438);
   Jets_cut_nJet__4335->SetBinError(8,209.609);
   Jets_cut_nJet__4335->SetBinError(9,72.34785);
   Jets_cut_nJet__4335->SetBinError(10,30.21561);
   Jets_cut_nJet__4335->SetBinError(11,11.64127);
   Jets_cut_nJet__4335->SetBinError(12,5.226564);
   Jets_cut_nJet__4335->SetBinError(13,1.937877);
   Jets_cut_nJet__4335->SetBinError(14,1.240928);
   Jets_cut_nJet__4335->SetBinError(15,0.1254345);
   Jets_cut_nJet__4335->SetEntries(5.064426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__4335->SetLineColor(ci);
   Jets_cut_nJet__4335->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__4335->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__4335->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__4335->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4335->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__4335->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__4335->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__4335->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__4335->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__4335->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__4335->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__4335->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__4335->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__4335->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__4335->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZJets_tagFirst_18->Modified();
   nJet_ZJets_tagFirst_18->cd();
   nJet_ZJets_tagFirst_18->SetSelected(nJet_ZJets_tagFirst_18);
}
