#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_DHZfirst_18()
{
//=========Macro generated from canvas: CvL_DHZfirst_18/CvL_DHZfirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *CvL_DHZfirst_18 = new TCanvas("CvL_DHZfirst_18", "CvL_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_DHZfirst_18->SetHighLightColor(2);
   CvL_DHZfirst_18->Range(-0.2,-5.897301e+10,1.133333,5.30757e+11);
   CvL_DHZfirst_18->SetFillColor(0);
   CvL_DHZfirst_18->SetFillStyle(4000);
   CvL_DHZfirst_18->SetBorderMode(0);
   CvL_DHZfirst_18->SetBorderSize(2);
   CvL_DHZfirst_18->SetLeftMargin(0.15);
   CvL_DHZfirst_18->SetFrameFillStyle(1000);
   CvL_DHZfirst_18->SetFrameBorderMode(0);
   CvL_DHZfirst_18->SetFrameFillStyle(1000);
   CvL_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__127 = new TH1D("Jets_cut_CvL__127","",20,0,1);
   Jets_cut_CvL__127->SetBinContent(1,4.493181e+11);
   Jets_cut_CvL__127->SetBinContent(2,3.383481e+11);
   Jets_cut_CvL__127->SetBinContent(3,1.085087e+11);
   Jets_cut_CvL__127->SetBinContent(4,4.199805e+10);
   Jets_cut_CvL__127->SetBinContent(5,2.223555e+10);
   Jets_cut_CvL__127->SetBinContent(6,1.430358e+10);
   Jets_cut_CvL__127->SetBinContent(7,9.742381e+09);
   Jets_cut_CvL__127->SetBinContent(8,7.228902e+09);
   Jets_cut_CvL__127->SetBinContent(9,5.921953e+09);
   Jets_cut_CvL__127->SetBinContent(10,4.874845e+09);
   Jets_cut_CvL__127->SetBinContent(11,4.251578e+09);
   Jets_cut_CvL__127->SetBinContent(12,3.466981e+09);
   Jets_cut_CvL__127->SetBinContent(13,3.308434e+09);
   Jets_cut_CvL__127->SetBinContent(14,3.044086e+09);
   Jets_cut_CvL__127->SetBinContent(15,2.970263e+09);
   Jets_cut_CvL__127->SetBinContent(16,3.251454e+09);
   Jets_cut_CvL__127->SetBinContent(17,3.702546e+09);
   Jets_cut_CvL__127->SetBinContent(18,4.602174e+09);
   Jets_cut_CvL__127->SetBinContent(19,6.057477e+09);
   Jets_cut_CvL__127->SetBinContent(20,1.748602e+10);
   Jets_cut_CvL__127->SetBinError(1,1.014873e+09);
   Jets_cut_CvL__127->SetBinError(2,8.857454e+08);
   Jets_cut_CvL__127->SetBinError(3,5.708522e+08);
   Jets_cut_CvL__127->SetBinError(4,3.443698e+08);
   Jets_cut_CvL__127->SetBinError(5,2.509758e+08);
   Jets_cut_CvL__127->SetBinError(6,2.355922e+08);
   Jets_cut_CvL__127->SetBinError(7,1.985051e+08);
   Jets_cut_CvL__127->SetBinError(8,1.432455e+08);
   Jets_cut_CvL__127->SetBinError(9,1.361922e+08);
   Jets_cut_CvL__127->SetBinError(10,1.191675e+08);
   Jets_cut_CvL__127->SetBinError(11,1.400566e+08);
   Jets_cut_CvL__127->SetBinError(12,9.542276e+07);
   Jets_cut_CvL__127->SetBinError(13,9.581543e+07);
   Jets_cut_CvL__127->SetBinError(14,8.640368e+07);
   Jets_cut_CvL__127->SetBinError(15,8.252439e+07);
   Jets_cut_CvL__127->SetBinError(16,8.384742e+07);
   Jets_cut_CvL__127->SetBinError(17,9.141717e+07);
   Jets_cut_CvL__127->SetBinError(18,1.011597e+08);
   Jets_cut_CvL__127->SetBinError(19,1.142733e+08);
   Jets_cut_CvL__127->SetBinError(20,2.113251e+08);
   Jets_cut_CvL__127->SetEntries(589029);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__127->SetLineColor(ci);
   Jets_cut_CvL__127->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__127->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__127->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__127->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__127->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__127->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__127->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__127->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__127->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_DHZfirst_18->Modified();
   CvL_DHZfirst_18->cd();
   CvL_DHZfirst_18->SetSelected(CvL_DHZfirst_18);
}
