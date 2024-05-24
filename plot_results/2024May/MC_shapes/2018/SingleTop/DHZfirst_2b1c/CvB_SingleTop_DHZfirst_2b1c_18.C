#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_SingleTop_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CvB_SingleTop_DHZfirst_2b1c_18/CvB_SingleTop_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvB_SingleTop_DHZfirst_2b1c_18 = new TCanvas("CvB_SingleTop_DHZfirst_2b1c_18", "CvB_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   CvB_SingleTop_DHZfirst_2b1c_18->Range(-0.2,-744299.9,1.133333,7618421);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   CvB_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   CvB_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   CvB_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__8331 = new TH1D("Jets_cut_CvB__8331","",20,0,1);
   Jets_cut_CvB__8331->SetBinContent(1,6463569);
   Jets_cut_CvB__8331->SetBinContent(2,916971.1);
   Jets_cut_CvB__8331->SetBinContent(3,591596.9);
   Jets_cut_CvB__8331->SetBinContent(4,515853.9);
   Jets_cut_CvB__8331->SetBinContent(5,470388.1);
   Jets_cut_CvB__8331->SetBinContent(6,424416.1);
   Jets_cut_CvB__8331->SetBinContent(7,400203.2);
   Jets_cut_CvB__8331->SetBinContent(8,395381.6);
   Jets_cut_CvB__8331->SetBinContent(9,433871.7);
   Jets_cut_CvB__8331->SetBinContent(10,474138.6);
   Jets_cut_CvB__8331->SetBinContent(11,521995.2);
   Jets_cut_CvB__8331->SetBinContent(12,598471.5);
   Jets_cut_CvB__8331->SetBinContent(13,760413.3);
   Jets_cut_CvB__8331->SetBinContent(14,976043.1);
   Jets_cut_CvB__8331->SetBinContent(15,1355806);
   Jets_cut_CvB__8331->SetBinContent(16,1931943);
   Jets_cut_CvB__8331->SetBinContent(17,3052050);
   Jets_cut_CvB__8331->SetBinContent(18,5388079);
   Jets_cut_CvB__8331->SetBinContent(19,6142697);
   Jets_cut_CvB__8331->SetBinContent(20,1118507);
   Jets_cut_CvB__8331->SetBinError(1,1090.011);
   Jets_cut_CvB__8331->SetBinError(2,407.8181);
   Jets_cut_CvB__8331->SetBinError(3,334.7882);
   Jets_cut_CvB__8331->SetBinError(4,308.3878);
   Jets_cut_CvB__8331->SetBinError(5,297.2697);
   Jets_cut_CvB__8331->SetBinError(6,283.7511);
   Jets_cut_CvB__8331->SetBinError(7,277.3287);
   Jets_cut_CvB__8331->SetBinError(8,277.5977);
   Jets_cut_CvB__8331->SetBinError(9,297.0317);
   Jets_cut_CvB__8331->SetBinError(10,313.7986);
   Jets_cut_CvB__8331->SetBinError(11,334.6057);
   Jets_cut_CvB__8331->SetBinError(12,363.925);
   Jets_cut_CvB__8331->SetBinError(13,413.0044);
   Jets_cut_CvB__8331->SetBinError(14,471.1034);
   Jets_cut_CvB__8331->SetBinError(15,557.6063);
   Jets_cut_CvB__8331->SetBinError(16,661.1986);
   Jets_cut_CvB__8331->SetBinError(17,836.1738);
   Jets_cut_CvB__8331->SetBinError(18,1110.695);
   Jets_cut_CvB__8331->SetBinError(19,1185.853);
   Jets_cut_CvB__8331->SetBinError(20,526.4267);
   Jets_cut_CvB__8331->SetEntries(4.653862e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__8331->SetLineColor(ci);
   Jets_cut_CvB__8331->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__8331->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__8331->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__8331->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8331->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__8331->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__8331->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__8331->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__8331->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__8331->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__8331->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__8331->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__8331->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8331->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__8331->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_SingleTop_DHZfirst_2b1c_18->Modified();
   CvB_SingleTop_DHZfirst_2b1c_18->cd();
   CvB_SingleTop_DHZfirst_2b1c_18->SetSelected(CvB_SingleTop_DHZfirst_2b1c_18);
}
