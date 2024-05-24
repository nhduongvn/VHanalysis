#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_QCD_tagOnly_2b1c_18_logY()
{
//=========Macro generated from canvas: nJet_QCD_tagOnly_2b1c_18/nJet_QCD_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:17 2024) by ROOT version 6.28/10
   TCanvas *nJet_QCD_tagOnly_2b1c_18 = new TCanvas("nJet_QCD_tagOnly_2b1c_18", "nJet_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   nJet_QCD_tagOnly_2b1c_18->Range(-3.3,0.585559,15.36667,13.61086);
   nJet_QCD_tagOnly_2b1c_18->SetFillColor(0);
   nJet_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   nJet_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   nJet_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   nJet_QCD_tagOnly_2b1c_18->SetLogy();
   nJet_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nJet_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nJet_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nJet_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__7449 = new TH1D("Jets_cut_nJet__7449","",14,-0.5,13.5);
   Jets_cut_nJet__7449->SetBinContent(1,1.073454e+12);
   Jets_cut_nJet__7449->SetBinContent(2,5.688117e+11);
   Jets_cut_nJet__7449->SetBinContent(3,3.023145e+11);
   Jets_cut_nJet__7449->SetBinContent(4,2.334851e+10);
   Jets_cut_nJet__7449->SetBinContent(5,4.219062e+09);
   Jets_cut_nJet__7449->SetBinContent(6,6.29085e+08);
   Jets_cut_nJet__7449->SetBinContent(7,9.501147e+07);
   Jets_cut_nJet__7449->SetBinContent(8,1.422496e+07);
   Jets_cut_nJet__7449->SetBinContent(9,2153848);
   Jets_cut_nJet__7449->SetBinContent(10,332585.2);
   Jets_cut_nJet__7449->SetBinContent(11,51345.58);
   Jets_cut_nJet__7449->SetBinContent(12,8065.904);
   Jets_cut_nJet__7449->SetBinContent(13,1211.158);
   Jets_cut_nJet__7449->SetBinContent(14,154.568);
   Jets_cut_nJet__7449->SetBinContent(15,15.52329);
   Jets_cut_nJet__7449->SetBinError(1,1.762782e+08);
   Jets_cut_nJet__7449->SetBinError(2,1.266109e+08);
   Jets_cut_nJet__7449->SetBinError(3,8.757396e+07);
   Jets_cut_nJet__7449->SetBinError(4,1.19496e+07);
   Jets_cut_nJet__7449->SetBinError(5,3447828);
   Jets_cut_nJet__7449->SetBinError(6,1095787);
   Jets_cut_nJet__7449->SetBinError(7,458566.8);
   Jets_cut_nJet__7449->SetBinError(8,125681.3);
   Jets_cut_nJet__7449->SetBinError(9,18948.62);
   Jets_cut_nJet__7449->SetBinError(10,4441.995);
   Jets_cut_nJet__7449->SetBinError(11,1417.537);
   Jets_cut_nJet__7449->SetBinError(12,835.3674);
   Jets_cut_nJet__7449->SetBinError(13,168.3139);
   Jets_cut_nJet__7449->SetBinError(14,36.96001);
   Jets_cut_nJet__7449->SetBinError(15,5.353298);
   Jets_cut_nJet__7449->SetEntries(3.401452e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__7449->SetLineColor(ci);
   Jets_cut_nJet__7449->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__7449->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__7449->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__7449->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7449->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__7449->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__7449->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__7449->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__7449->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__7449->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__7449->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__7449->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__7449->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__7449->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__7449->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_QCD_tagOnly_2b1c_18->Modified();
   nJet_QCD_tagOnly_2b1c_18->cd();
   nJet_QCD_tagOnly_2b1c_18->SetSelected(nJet_QCD_tagOnly_2b1c_18);
}
