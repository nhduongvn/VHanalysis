#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WW_tagOnly_16_logY()
{
//=========Macro generated from canvas: nJet_WW_tagOnly_16/nJet_WW_tagOnly_16
//=========  (Fri May 24 12:43:28 2024) by ROOT version 6.28/10
   TCanvas *nJet_WW_tagOnly_16 = new TCanvas("nJet_WW_tagOnly_16", "nJet_WW_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WW_tagOnly_16->SetHighLightColor(2);
   nJet_WW_tagOnly_16->Range(-3.3,-1.299585,15.36667,8.026703);
   nJet_WW_tagOnly_16->SetFillColor(0);
   nJet_WW_tagOnly_16->SetFillStyle(4000);
   nJet_WW_tagOnly_16->SetBorderMode(0);
   nJet_WW_tagOnly_16->SetBorderSize(2);
   nJet_WW_tagOnly_16->SetLogy();
   nJet_WW_tagOnly_16->SetLeftMargin(0.15);
   nJet_WW_tagOnly_16->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_16->SetFrameBorderMode(0);
   nJet_WW_tagOnly_16->SetFrameFillStyle(1000);
   nJet_WW_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5122 = new TH1D("Jets_cut_nJet__5122","",14,-0.5,13.5);
   Jets_cut_nJet__5122->SetBinContent(1,6554278);
   Jets_cut_nJet__5122->SetBinContent(2,4011144);
   Jets_cut_nJet__5122->SetBinContent(3,1422459);
   Jets_cut_nJet__5122->SetBinContent(4,212961.1);
   Jets_cut_nJet__5122->SetBinContent(5,52105.19);
   Jets_cut_nJet__5122->SetBinContent(6,11634.14);
   Jets_cut_nJet__5122->SetBinContent(7,2216.27);
   Jets_cut_nJet__5122->SetBinContent(8,363.8926);
   Jets_cut_nJet__5122->SetBinContent(9,60.34514);
   Jets_cut_nJet__5122->SetBinContent(10,6.514718);
   Jets_cut_nJet__5122->SetBinContent(11,0.8591595);
   Jets_cut_nJet__5122->SetBinError(1,2015.843);
   Jets_cut_nJet__5122->SetBinError(2,1596.873);
   Jets_cut_nJet__5122->SetBinError(3,888.3126);
   Jets_cut_nJet__5122->SetBinError(4,224.9803);
   Jets_cut_nJet__5122->SetBinError(5,73.75197);
   Jets_cut_nJet__5122->SetBinError(6,35.95035);
   Jets_cut_nJet__5122->SetBinError(7,16.13517);
   Jets_cut_nJet__5122->SetBinError(8,6.685148);
   Jets_cut_nJet__5122->SetBinError(9,2.79029);
   Jets_cut_nJet__5122->SetBinError(10,0.9580408);
   Jets_cut_nJet__5122->SetBinError(11,0.3296561);
   Jets_cut_nJet__5122->SetEntries(3.168e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5122->SetLineColor(ci);
   Jets_cut_nJet__5122->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5122->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5122->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5122->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5122->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5122->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5122->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5122->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5122->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5122->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5122->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5122->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5122->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5122->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5122->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WW_tagOnly_16->Modified();
   nJet_WW_tagOnly_16->cd();
   nJet_WW_tagOnly_16->SetSelected(nJet_WW_tagOnly_16);
}
