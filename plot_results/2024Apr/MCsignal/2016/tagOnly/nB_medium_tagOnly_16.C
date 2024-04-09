#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_tagOnly_16()
{
//=========Macro generated from canvas: nB_medium_tagOnly_16/nB_medium_tagOnly_16
//=========  (Mon Apr  8 11:27:54 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_tagOnly_16 = new TCanvas("nB_medium_tagOnly_16", "nB_medium_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_tagOnly_16->SetHighLightColor(2);
   nB_medium_tagOnly_16->Range(-2.5,-110.4067,10.83333,993.6605);
   nB_medium_tagOnly_16->SetFillColor(0);
   nB_medium_tagOnly_16->SetFillStyle(4000);
   nB_medium_tagOnly_16->SetBorderMode(0);
   nB_medium_tagOnly_16->SetBorderSize(2);
   nB_medium_tagOnly_16->SetLeftMargin(0.15);
   nB_medium_tagOnly_16->SetFrameFillStyle(1000);
   nB_medium_tagOnly_16->SetFrameBorderMode(0);
   nB_medium_tagOnly_16->SetFrameFillStyle(1000);
   nB_medium_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__307 = new TH1D("Jets_cut_nB_medium__307","",10,-0.5,9.5);
   Jets_cut_nB_medium__307->SetBinContent(1,841.194);
   Jets_cut_nB_medium__307->SetBinContent(2,163.682);
   Jets_cut_nB_medium__307->SetBinContent(3,20.70751);
   Jets_cut_nB_medium__307->SetBinContent(4,1.850066);
   Jets_cut_nB_medium__307->SetBinContent(5,0.09202453);
   Jets_cut_nB_medium__307->SetBinContent(6,0.004397165);
   Jets_cut_nB_medium__307->SetBinError(1,2.876078);
   Jets_cut_nB_medium__307->SetBinError(2,1.137306);
   Jets_cut_nB_medium__307->SetBinError(3,0.3198628);
   Jets_cut_nB_medium__307->SetBinError(4,0.0727954);
   Jets_cut_nB_medium__307->SetBinError(5,0.01383115);
   Jets_cut_nB_medium__307->SetBinError(6,0.003122957);
   Jets_cut_nB_medium__307->SetEntries(249197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__307->SetLineColor(ci);
   Jets_cut_nB_medium__307->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__307->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__307->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__307->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__307->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__307->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__307->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__307->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__307->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__307->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__307->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__307->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__307->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__307->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__307->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_tagOnly_16->Modified();
   nB_medium_tagOnly_16->cd();
   nB_medium_tagOnly_16->SetSelected(nB_medium_tagOnly_16);
}
