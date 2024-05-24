#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZZ_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nJet_ZZ_tagOnly_2b1c_18/nJet_ZZ_tagOnly_2b1c_18
//=========  (Fri May 24 12:34:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZZ_tagOnly_2b1c_18 = new TCanvas("nJet_ZZ_tagOnly_2b1c_18", "nJet_ZZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZZ_tagOnly_2b1c_18->SetHighLightColor(2);
   nJet_ZZ_tagOnly_2b1c_18->Range(-3.3,-56122.35,15.36667,505101.1);
   nJet_ZZ_tagOnly_2b1c_18->SetFillColor(0);
   nJet_ZZ_tagOnly_2b1c_18->SetFillStyle(4000);
   nJet_ZZ_tagOnly_2b1c_18->SetBorderMode(0);
   nJet_ZZ_tagOnly_2b1c_18->SetBorderSize(2);
   nJet_ZZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nJet_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nJet_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7470 = new TH1D("Jets_cut_nJet__7470","",14,-0.5,13.5);
   Jets_cut_nJet__7470->SetBinContent(1,427598.8);
   Jets_cut_nJet__7470->SetBinContent(2,297248.1);
   Jets_cut_nJet__7470->SetBinContent(3,184263);
   Jets_cut_nJet__7470->SetBinContent(4,76944.81);
   Jets_cut_nJet__7470->SetBinContent(5,27837.94);
   Jets_cut_nJet__7470->SetBinContent(6,6725.205);
   Jets_cut_nJet__7470->SetBinContent(7,1265.36);
   Jets_cut_nJet__7470->SetBinContent(8,232.1661);
   Jets_cut_nJet__7470->SetBinContent(9,27.6638);
   Jets_cut_nJet__7470->SetBinContent(10,5.951143);
   Jets_cut_nJet__7470->SetBinContent(11,0.325572);
   Jets_cut_nJet__7470->SetBinError(1,418.9481);
   Jets_cut_nJet__7470->SetBinError(2,345.3112);
   Jets_cut_nJet__7470->SetBinError(3,265.0051);
   Jets_cut_nJet__7470->SetBinError(4,188.1076);
   Jets_cut_nJet__7470->SetBinError(5,123.5492);
   Jets_cut_nJet__7470->SetBinError(6,66.6302);
   Jets_cut_nJet__7470->SetBinError(7,28.65584);
   Jets_cut_nJet__7470->SetBinError(8,13.77836);
   Jets_cut_nJet__7470->SetBinError(9,4.652706);
   Jets_cut_nJet__7470->SetBinError(10,2.067194);
   Jets_cut_nJet__7470->SetBinError(11,0.325572);
   Jets_cut_nJet__7470->SetEntries(3526000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7470->SetLineColor(ci);
   Jets_cut_nJet__7470->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7470->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7470->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7470->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7470->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7470->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7470->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7470->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7470->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7470->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7470->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7470->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7470->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7470->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7470->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZZ_tagOnly_2b1c_18->Modified();
   nJet_ZZ_tagOnly_2b1c_18->cd();
   nJet_ZZ_tagOnly_2b1c_18->SetSelected(nJet_ZZ_tagOnly_2b1c_18);
}
