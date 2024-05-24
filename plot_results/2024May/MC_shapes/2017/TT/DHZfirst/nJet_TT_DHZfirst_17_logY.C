#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_TT_DHZfirst_17_logY()
{
//=========Macro generated from canvas: nJet_TT_DHZfirst_17/nJet_TT_DHZfirst_17
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *nJet_TT_DHZfirst_17 = new TCanvas("nJet_TT_DHZfirst_17", "nJet_TT_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_TT_DHZfirst_17->SetHighLightColor(2);
   nJet_TT_DHZfirst_17->Range(-3.3,0.4489737,15.36667,7.895908);
   nJet_TT_DHZfirst_17->SetFillColor(0);
   nJet_TT_DHZfirst_17->SetFillStyle(4000);
   nJet_TT_DHZfirst_17->SetBorderMode(0);
   nJet_TT_DHZfirst_17->SetBorderSize(2);
   nJet_TT_DHZfirst_17->SetLogy();
   nJet_TT_DHZfirst_17->SetLeftMargin(0.15);
   nJet_TT_DHZfirst_17->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_17->SetFrameBorderMode(0);
   nJet_TT_DHZfirst_17->SetFrameFillStyle(1000);
   nJet_TT_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5897 = new TH1D("Jets_cut_nJet__5897","",14,-0.5,13.5);
   Jets_cut_nJet__5897->SetBinContent(1,933217.8);
   Jets_cut_nJet__5897->SetBinContent(2,3126342);
   Jets_cut_nJet__5897->SetBinContent(3,6322610);
   Jets_cut_nJet__5897->SetBinContent(4,7475938);
   Jets_cut_nJet__5897->SetBinContent(5,5725951);
   Jets_cut_nJet__5897->SetBinContent(6,2940055);
   Jets_cut_nJet__5897->SetBinContent(7,1119908);
   Jets_cut_nJet__5897->SetBinContent(8,342837.7);
   Jets_cut_nJet__5897->SetBinContent(9,90733.81);
   Jets_cut_nJet__5897->SetBinContent(10,21341.71);
   Jets_cut_nJet__5897->SetBinContent(11,4614.392);
   Jets_cut_nJet__5897->SetBinContent(12,952.3497);
   Jets_cut_nJet__5897->SetBinContent(13,175.8732);
   Jets_cut_nJet__5897->SetBinContent(14,31.239);
   Jets_cut_nJet__5897->SetBinContent(15,6.283328);
   Jets_cut_nJet__5897->SetBinError(1,209.0913);
   Jets_cut_nJet__5897->SetBinError(2,377.5552);
   Jets_cut_nJet__5897->SetBinError(3,556.6826);
   Jets_cut_nJet__5897->SetBinError(4,657.183);
   Jets_cut_nJet__5897->SetBinError(5,640.3409);
   Jets_cut_nJet__5897->SetBinError(6,501.1317);
   Jets_cut_nJet__5897->SetBinError(7,331.0329);
   Jets_cut_nJet__5897->SetBinError(8,193.4964);
   Jets_cut_nJet__5897->SetBinError(9,104.4577);
   Jets_cut_nJet__5897->SetBinError(10,52.90352);
   Jets_cut_nJet__5897->SetBinError(11,25.56157);
   Jets_cut_nJet__5897->SetBinError(12,11.95937);
   Jets_cut_nJet__5897->SetBinError(13,5.31407);
   Jets_cut_nJet__5897->SetBinError(14,2.299903);
   Jets_cut_nJet__5897->SetBinError(15,1.087937);
   Jets_cut_nJet__5897->SetEntries(6.14341e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5897->SetLineColor(ci);
   Jets_cut_nJet__5897->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5897->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5897->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5897->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5897->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5897->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5897->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5897->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5897->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5897->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5897->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5897->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5897->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5897->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5897->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_TT_DHZfirst_17->Modified();
   nJet_TT_DHZfirst_17->cd();
   nJet_TT_DHZfirst_17->SetSelected(nJet_TT_DHZfirst_17);
}
