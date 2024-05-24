#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: CvB_ZZ_DHZfirst_17/CvB_ZZ_DHZfirst_17
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZZ_DHZfirst_17 = new TCanvas("CvB_ZZ_DHZfirst_17", "CvB_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZZ_DHZfirst_17->SetHighLightColor(2);
   CvB_ZZ_DHZfirst_17->Range(-0.2,-20670.51,1.133333,186034.6);
   CvB_ZZ_DHZfirst_17->SetFillColor(0);
   CvB_ZZ_DHZfirst_17->SetFillStyle(4000);
   CvB_ZZ_DHZfirst_17->SetBorderMode(0);
   CvB_ZZ_DHZfirst_17->SetBorderSize(2);
   CvB_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   CvB_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   CvB_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5999 = new TH1D("Jets_cut_CvB__5999","",20,0,1);
   Jets_cut_CvB__5999->SetBinContent(1,48379.12);
   Jets_cut_CvB__5999->SetBinContent(2,7483.71);
   Jets_cut_CvB__5999->SetBinContent(3,5080.016);
   Jets_cut_CvB__5999->SetBinContent(4,4622.277);
   Jets_cut_CvB__5999->SetBinContent(5,4475.374);
   Jets_cut_CvB__5999->SetBinContent(6,4266.334);
   Jets_cut_CvB__5999->SetBinContent(7,4444.276);
   Jets_cut_CvB__5999->SetBinContent(8,4708.059);
   Jets_cut_CvB__5999->SetBinContent(9,5552.742);
   Jets_cut_CvB__5999->SetBinContent(10,6694.727);
   Jets_cut_CvB__5999->SetBinContent(11,8169.59);
   Jets_cut_CvB__5999->SetBinContent(12,10105.8);
   Jets_cut_CvB__5999->SetBinContent(13,13798.26);
   Jets_cut_CvB__5999->SetBinContent(14,19481.6);
   Jets_cut_CvB__5999->SetBinContent(15,29057.34);
   Jets_cut_CvB__5999->SetBinContent(16,43447.66);
   Jets_cut_CvB__5999->SetBinContent(17,69721.91);
   Jets_cut_CvB__5999->SetBinContent(18,127781.9);
   Jets_cut_CvB__5999->SetBinContent(19,157489.6);
   Jets_cut_CvB__5999->SetBinContent(20,25894.27);
   Jets_cut_CvB__5999->SetBinError(1,116.0344);
   Jets_cut_CvB__5999->SetBinError(2,45.1681);
   Jets_cut_CvB__5999->SetBinError(3,37.16467);
   Jets_cut_CvB__5999->SetBinError(4,35.37269);
   Jets_cut_CvB__5999->SetBinError(5,34.65631);
   Jets_cut_CvB__5999->SetBinError(6,33.72878);
   Jets_cut_CvB__5999->SetBinError(7,34.2431);
   Jets_cut_CvB__5999->SetBinError(8,34.27323);
   Jets_cut_CvB__5999->SetBinError(9,37.42775);
   Jets_cut_CvB__5999->SetBinError(10,41.20816);
   Jets_cut_CvB__5999->SetBinError(11,45.72328);
   Jets_cut_CvB__5999->SetBinError(12,50.91119);
   Jets_cut_CvB__5999->SetBinError(13,59.48733);
   Jets_cut_CvB__5999->SetBinError(14,70.66121);
   Jets_cut_CvB__5999->SetBinError(15,85.8706);
   Jets_cut_CvB__5999->SetBinError(16,104.5183);
   Jets_cut_CvB__5999->SetBinError(17,131.2377);
   Jets_cut_CvB__5999->SetBinError(18,176.2484);
   Jets_cut_CvB__5999->SetBinError(19,196.2928);
   Jets_cut_CvB__5999->SetBinError(20,79.7986);
   Jets_cut_CvB__5999->SetEntries(2818734);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5999->SetLineColor(ci);
   Jets_cut_CvB__5999->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5999->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5999->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5999->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5999->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5999->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5999->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5999->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5999->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5999->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5999->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5999->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5999->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5999->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5999->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZZ_DHZfirst_17->Modified();
   CvB_ZZ_DHZfirst_17->cd();
   CvB_ZZ_DHZfirst_17->SetSelected(CvB_ZZ_DHZfirst_17);
}
