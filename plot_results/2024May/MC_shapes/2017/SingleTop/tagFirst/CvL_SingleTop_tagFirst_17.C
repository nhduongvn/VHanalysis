#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_SingleTop_tagFirst_17()
{
//=========Macro generated from canvas: CvL_SingleTop_tagFirst_17/CvL_SingleTop_tagFirst_17
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CvL_SingleTop_tagFirst_17 = new TCanvas("CvL_SingleTop_tagFirst_17", "CvL_SingleTop_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_SingleTop_tagFirst_17->SetHighLightColor(2);
   CvL_SingleTop_tagFirst_17->Range(-0.2,-464974.5,1.133333,4592185);
   CvL_SingleTop_tagFirst_17->SetFillColor(0);
   CvL_SingleTop_tagFirst_17->SetFillStyle(4000);
   CvL_SingleTop_tagFirst_17->SetBorderMode(0);
   CvL_SingleTop_tagFirst_17->SetBorderSize(2);
   CvL_SingleTop_tagFirst_17->SetLeftMargin(0.15);
   CvL_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   CvL_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   CvL_SingleTop_tagFirst_17->SetFrameFillStyle(1000);
   CvL_SingleTop_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__4400 = new TH1D("Jets_cut_CvL__4400","",20,0,1);
   Jets_cut_CvL__4400->SetBinContent(1,3212740);
   Jets_cut_CvL__4400->SetBinContent(2,3893815);
   Jets_cut_CvL__4400->SetBinContent(3,1476929);
   Jets_cut_CvL__4400->SetBinContent(4,726390.3);
   Jets_cut_CvL__4400->SetBinContent(5,454492.3);
   Jets_cut_CvL__4400->SetBinContent(6,346712);
   Jets_cut_CvL__4400->SetBinContent(7,285522.5);
   Jets_cut_CvL__4400->SetBinContent(8,246956.2);
   Jets_cut_CvL__4400->SetBinContent(9,228599.7);
   Jets_cut_CvL__4400->SetBinContent(10,224221.1);
   Jets_cut_CvL__4400->SetBinContent(11,228177.5);
   Jets_cut_CvL__4400->SetBinContent(12,237418.2);
   Jets_cut_CvL__4400->SetBinContent(13,259945.9);
   Jets_cut_CvL__4400->SetBinContent(14,292378);
   Jets_cut_CvL__4400->SetBinContent(15,343935.5);
   Jets_cut_CvL__4400->SetBinContent(16,421617.7);
   Jets_cut_CvL__4400->SetBinContent(17,527731.6);
   Jets_cut_CvL__4400->SetBinContent(18,707894.9);
   Jets_cut_CvL__4400->SetBinContent(19,999116.2);
   Jets_cut_CvL__4400->SetBinContent(20,2236988);
   Jets_cut_CvL__4400->SetBinError(1,629.9151);
   Jets_cut_CvL__4400->SetBinError(2,699.7281);
   Jets_cut_CvL__4400->SetBinError(3,441.1417);
   Jets_cut_CvL__4400->SetBinError(4,306.9368);
   Jets_cut_CvL__4400->SetBinError(5,240.401);
   Jets_cut_CvL__4400->SetBinError(6,208.233);
   Jets_cut_CvL__4400->SetBinError(7,186.7351);
   Jets_cut_CvL__4400->SetBinError(8,172.1873);
   Jets_cut_CvL__4400->SetBinError(9,163.6438);
   Jets_cut_CvL__4400->SetBinError(10,160.6333);
   Jets_cut_CvL__4400->SetBinError(11,160.6053);
   Jets_cut_CvL__4400->SetBinError(12,162.4943);
   Jets_cut_CvL__4400->SetBinError(13,168.7512);
   Jets_cut_CvL__4400->SetBinError(14,177.6661);
   Jets_cut_CvL__4400->SetBinError(15,191.9067);
   Jets_cut_CvL__4400->SetBinError(16,211.3325);
   Jets_cut_CvL__4400->SetBinError(17,235.8845);
   Jets_cut_CvL__4400->SetBinError(18,272.9479);
   Jets_cut_CvL__4400->SetBinError(19,323.2951);
   Jets_cut_CvL__4400->SetBinError(20,486.6764);
   Jets_cut_CvL__4400->SetEntries(3.270068e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__4400->SetLineColor(ci);
   Jets_cut_CvL__4400->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__4400->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__4400->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__4400->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4400->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__4400->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__4400->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__4400->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__4400->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__4400->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__4400->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__4400->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__4400->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4400->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__4400->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_SingleTop_tagFirst_17->Modified();
   CvL_SingleTop_tagFirst_17->cd();
   CvL_SingleTop_tagFirst_17->SetSelected(CvL_SingleTop_tagFirst_17);
}
