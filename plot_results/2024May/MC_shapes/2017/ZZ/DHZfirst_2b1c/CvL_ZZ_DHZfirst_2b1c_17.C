#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: CvL_ZZ_DHZfirst_2b1c_17/CvL_ZZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZZ_DHZfirst_2b1c_17 = new TCanvas("CvL_ZZ_DHZfirst_2b1c_17", "CvL_ZZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   CvL_ZZ_DHZfirst_2b1c_17->Range(-0.2,-23640.48,1.133333,212764.3);
   CvL_ZZ_DHZfirst_2b1c_17->SetFillColor(0);
   CvL_ZZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   CvL_ZZ_DHZfirst_2b1c_17->SetBorderMode(0);
   CvL_ZZ_DHZfirst_2b1c_17->SetBorderSize(2);
   CvL_ZZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   CvL_ZZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_ZZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   CvL_ZZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_ZZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8309 = new TH1D("Jets_cut_CvL__8309","",20,0,1);
   Jets_cut_CvL__8309->SetBinContent(1,159974.8);
   Jets_cut_CvL__8309->SetBinContent(2,180118);
   Jets_cut_CvL__8309->SetBinContent(3,63092.84);
   Jets_cut_CvL__8309->SetBinContent(4,28494.81);
   Jets_cut_CvL__8309->SetBinContent(5,16012.87);
   Jets_cut_CvL__8309->SetBinContent(6,11385.21);
   Jets_cut_CvL__8309->SetBinContent(7,8614.996);
   Jets_cut_CvL__8309->SetBinContent(8,7007.257);
   Jets_cut_CvL__8309->SetBinContent(9,6101.538);
   Jets_cut_CvL__8309->SetBinContent(10,5669.009);
   Jets_cut_CvL__8309->SetBinContent(11,5482.253);
   Jets_cut_CvL__8309->SetBinContent(12,5376.92);
   Jets_cut_CvL__8309->SetBinContent(13,5526.655);
   Jets_cut_CvL__8309->SetBinContent(14,5889.081);
   Jets_cut_CvL__8309->SetBinContent(15,6550.762);
   Jets_cut_CvL__8309->SetBinContent(16,7689.081);
   Jets_cut_CvL__8309->SetBinContent(17,9158.742);
   Jets_cut_CvL__8309->SetBinContent(18,11835.62);
   Jets_cut_CvL__8309->SetBinContent(19,16274.76);
   Jets_cut_CvL__8309->SetBinContent(20,40399.32);
   Jets_cut_CvL__8309->SetBinError(1,195.8838);
   Jets_cut_CvL__8309->SetBinError(2,209.5836);
   Jets_cut_CvL__8309->SetBinError(3,128.2695);
   Jets_cut_CvL__8309->SetBinError(4,86.41997);
   Jets_cut_CvL__8309->SetBinError(5,64.73625);
   Jets_cut_CvL__8309->SetBinError(6,54.60534);
   Jets_cut_CvL__8309->SetBinError(7,47.59102);
   Jets_cut_CvL__8309->SetBinError(8,42.91355);
   Jets_cut_CvL__8309->SetBinError(9,40.03624);
   Jets_cut_CvL__8309->SetBinError(10,38.49035);
   Jets_cut_CvL__8309->SetBinError(11,37.98669);
   Jets_cut_CvL__8309->SetBinError(12,37.56221);
   Jets_cut_CvL__8309->SetBinError(13,38.0515);
   Jets_cut_CvL__8309->SetBinError(14,39.33718);
   Jets_cut_CvL__8309->SetBinError(15,41.45678);
   Jets_cut_CvL__8309->SetBinError(16,45.19001);
   Jets_cut_CvL__8309->SetBinError(17,49.24851);
   Jets_cut_CvL__8309->SetBinError(18,56.2082);
   Jets_cut_CvL__8309->SetBinError(19,65.97043);
   Jets_cut_CvL__8309->SetBinError(20,102.4283);
   Jets_cut_CvL__8309->SetEntries(2818734);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8309->SetLineColor(ci);
   Jets_cut_CvL__8309->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8309->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8309->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8309->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8309->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8309->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8309->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8309->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8309->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8309->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8309->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8309->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8309->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8309->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8309->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZZ_DHZfirst_2b1c_17->Modified();
   CvL_ZZ_DHZfirst_2b1c_17->cd();
   CvL_ZZ_DHZfirst_2b1c_17->SetSelected(CvL_ZZ_DHZfirst_2b1c_17);
}
