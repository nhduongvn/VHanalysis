#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZJets_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: nB_medium_ZJets_tagFirst_2b1c_16/nB_medium_ZJets_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZJets_tagFirst_2b1c_16 = new TCanvas("nB_medium_ZJets_tagFirst_2b1c_16", "nB_medium_ZJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZJets_tagFirst_2b1c_16->SetHighLightColor(2);
   nB_medium_ZJets_tagFirst_2b1c_16->Range(-2.5,-4747498,10.83333,4.272748e+07);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFillColor(0);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFillStyle(4000);
   nB_medium_ZJets_tagFirst_2b1c_16->SetBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_16->SetBorderSize(2);
   nB_medium_ZJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6793 = new TH1D("Jets_cut_nB_medium__6793","",10,-0.5,9.5);
   Jets_cut_nB_medium__6793->SetBinContent(1,3.617141e+07);
   Jets_cut_nB_medium__6793->SetBinContent(2,7795280);
   Jets_cut_nB_medium__6793->SetBinContent(3,916412);
   Jets_cut_nB_medium__6793->SetBinContent(4,47641.86);
   Jets_cut_nB_medium__6793->SetBinContent(5,2104.643);
   Jets_cut_nB_medium__6793->SetBinContent(6,55.64201);
   Jets_cut_nB_medium__6793->SetBinContent(7,1.913729);
   Jets_cut_nB_medium__6793->SetBinContent(8,0.3623656);
   Jets_cut_nB_medium__6793->SetBinError(1,16055.13);
   Jets_cut_nB_medium__6793->SetBinError(2,7520.007);
   Jets_cut_nB_medium__6793->SetBinError(3,2151.123);
   Jets_cut_nB_medium__6793->SetBinError(4,355.3273);
   Jets_cut_nB_medium__6793->SetBinError(5,36.3709);
   Jets_cut_nB_medium__6793->SetBinError(6,3.086578);
   Jets_cut_nB_medium__6793->SetBinError(7,0.3666855);
   Jets_cut_nB_medium__6793->SetBinError(8,0.1961522);
   Jets_cut_nB_medium__6793->SetEntries(4.758213e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6793->SetLineColor(ci);
   Jets_cut_nB_medium__6793->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6793->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6793->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6793->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6793->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6793->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6793->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6793->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6793->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6793->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6793->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6793->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6793->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6793->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6793->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZJets_tagFirst_2b1c_16->Modified();
   nB_medium_ZJets_tagFirst_2b1c_16->cd();
   nB_medium_ZJets_tagFirst_2b1c_16->SetSelected(nB_medium_ZJets_tagFirst_2b1c_16);
}
