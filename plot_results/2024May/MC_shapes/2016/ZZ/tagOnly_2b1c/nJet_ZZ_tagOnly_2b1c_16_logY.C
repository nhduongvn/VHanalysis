#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZZ_tagOnly_2b1c_16_logY()
{
//=========Macro generated from canvas: nJet_ZZ_tagOnly_2b1c_16/nJet_ZZ_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:17 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZZ_tagOnly_2b1c_16 = new TCanvas("nJet_ZZ_tagOnly_2b1c_16", "nJet_ZZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZZ_tagOnly_2b1c_16->SetHighLightColor(2);
   nJet_ZZ_tagOnly_2b1c_16->Range(-3.3,-1.826578,15.36667,7.005924);
   nJet_ZZ_tagOnly_2b1c_16->SetFillColor(0);
   nJet_ZZ_tagOnly_2b1c_16->SetFillStyle(4000);
   nJet_ZZ_tagOnly_2b1c_16->SetBorderMode(0);
   nJet_ZZ_tagOnly_2b1c_16->SetBorderSize(2);
   nJet_ZZ_tagOnly_2b1c_16->SetLogy();
   nJet_ZZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nJet_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nJet_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nJet_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nJet_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7468 = new TH1D("Jets_cut_nJet__7468","",14,-0.5,13.5);
   Jets_cut_nJet__7468->SetBinContent(1,700043.1);
   Jets_cut_nJet__7468->SetBinContent(2,547379.7);
   Jets_cut_nJet__7468->SetBinContent(3,234979.5);
   Jets_cut_nJet__7468->SetBinContent(4,39451.83);
   Jets_cut_nJet__7468->SetBinContent(5,9372.801);
   Jets_cut_nJet__7468->SetBinContent(6,2060.478);
   Jets_cut_nJet__7468->SetBinContent(7,392.851);
   Jets_cut_nJet__7468->SetBinContent(8,68.48661);
   Jets_cut_nJet__7468->SetBinContent(9,10.24059);
   Jets_cut_nJet__7468->SetBinContent(10,0.227878);
   Jets_cut_nJet__7468->SetBinContent(11,0.2309366);
   Jets_cut_nJet__7468->SetBinError(1,868.58);
   Jets_cut_nJet__7468->SetBinError(2,793.8627);
   Jets_cut_nJet__7468->SetBinError(3,491.06);
   Jets_cut_nJet__7468->SetBinError(4,136.4026);
   Jets_cut_nJet__7468->SetBinError(5,42.57219);
   Jets_cut_nJet__7468->SetBinError(6,20.57752);
   Jets_cut_nJet__7468->SetBinError(7,9.224179);
   Jets_cut_nJet__7468->SetBinError(8,3.910859);
   Jets_cut_nJet__7468->SetBinError(9,1.550677);
   Jets_cut_nJet__7468->SetBinError(10,0.2145424);
   Jets_cut_nJet__7468->SetBinError(11,0.2309366);
   Jets_cut_nJet__7468->SetEntries(2433000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7468->SetLineColor(ci);
   Jets_cut_nJet__7468->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7468->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7468->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7468->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7468->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7468->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7468->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7468->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7468->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7468->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7468->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7468->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7468->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7468->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7468->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZZ_tagOnly_2b1c_16->Modified();
   nJet_ZZ_tagOnly_2b1c_16->cd();
   nJet_ZZ_tagOnly_2b1c_16->SetSelected(nJet_ZZ_tagOnly_2b1c_16);
}
