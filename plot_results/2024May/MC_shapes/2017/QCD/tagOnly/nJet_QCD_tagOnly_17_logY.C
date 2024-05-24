#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_QCD_tagOnly_17_logY()
{
//=========Macro generated from canvas: nJet_QCD_tagOnly_17/nJet_QCD_tagOnly_17
//=========  (Fri May 24 12:43:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_QCD_tagOnly_17 = new TCanvas("nJet_QCD_tagOnly_17", "nJet_QCD_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_QCD_tagOnly_17->SetHighLightColor(2);
   nJet_QCD_tagOnly_17->Range(-3.3,0.1757978,15.36667,13.41708);
   nJet_QCD_tagOnly_17->SetFillColor(0);
   nJet_QCD_tagOnly_17->SetFillStyle(4000);
   nJet_QCD_tagOnly_17->SetBorderMode(0);
   nJet_QCD_tagOnly_17->SetBorderSize(2);
   nJet_QCD_tagOnly_17->SetLogy();
   nJet_QCD_tagOnly_17->SetLeftMargin(0.15);
   nJet_QCD_tagOnly_17->SetFrameFillStyle(1000);
   nJet_QCD_tagOnly_17->SetFrameBorderMode(0);
   nJet_QCD_tagOnly_17->SetFrameFillStyle(1000);
   nJet_QCD_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5108 = new TH1D("Jets_cut_nJet__5108","",14,-0.5,13.5);
   Jets_cut_nJet__5108->SetBinContent(1,6.537419e+11);
   Jets_cut_nJet__5108->SetBinContent(2,3.533882e+11);
   Jets_cut_nJet__5108->SetBinContent(3,1.909658e+11);
   Jets_cut_nJet__5108->SetBinContent(4,1.268602e+10);
   Jets_cut_nJet__5108->SetBinContent(5,1.814587e+09);
   Jets_cut_nJet__5108->SetBinContent(6,2.615708e+08);
   Jets_cut_nJet__5108->SetBinContent(7,3.934027e+07);
   Jets_cut_nJet__5108->SetBinContent(8,5973443);
   Jets_cut_nJet__5108->SetBinContent(9,909387.6);
   Jets_cut_nJet__5108->SetBinContent(10,143996.9);
   Jets_cut_nJet__5108->SetBinContent(11,20379.48);
   Jets_cut_nJet__5108->SetBinContent(12,2925.467);
   Jets_cut_nJet__5108->SetBinContent(13,475.86);
   Jets_cut_nJet__5108->SetBinContent(14,63.23484);
   Jets_cut_nJet__5108->SetBinContent(15,10.08568);
   Jets_cut_nJet__5108->SetBinError(1,1.025912e+08);
   Jets_cut_nJet__5108->SetBinError(2,7.39488e+07);
   Jets_cut_nJet__5108->SetBinError(3,5.119462e+07);
   Jets_cut_nJet__5108->SetBinError(4,7405361);
   Jets_cut_nJet__5108->SetBinError(5,1441200);
   Jets_cut_nJet__5108->SetBinError(6,430731.4);
   Jets_cut_nJet__5108->SetBinError(7,150368.3);
   Jets_cut_nJet__5108->SetBinError(8,42288.61);
   Jets_cut_nJet__5108->SetBinError(9,6617.194);
   Jets_cut_nJet__5108->SetBinError(10,2220.076);
   Jets_cut_nJet__5108->SetBinError(11,406.5874);
   Jets_cut_nJet__5108->SetBinError(12,123.3148);
   Jets_cut_nJet__5108->SetBinError(13,49.52391);
   Jets_cut_nJet__5108->SetBinError(14,14.37798);
   Jets_cut_nJet__5108->SetBinError(15,3.787031);
   Jets_cut_nJet__5108->SetEntries(3.134799e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5108->SetLineColor(ci);
   Jets_cut_nJet__5108->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5108->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5108->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5108->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5108->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5108->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5108->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5108->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5108->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5108->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5108->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5108->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5108->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5108->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5108->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_QCD_tagOnly_17->Modified();
   nJet_QCD_tagOnly_17->cd();
   nJet_QCD_tagOnly_17->SetSelected(nJet_QCD_tagOnly_17);
}
