#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHbb_tagOnly_16()
{
//=========Macro generated from canvas: CvL_ZHbb_tagOnly_16/CvL_ZHbb_tagOnly_16
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHbb_tagOnly_16 = new TCanvas("CvL_ZHbb_tagOnly_16", "CvL_ZHbb_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHbb_tagOnly_16->SetHighLightColor(2);
   CvL_ZHbb_tagOnly_16->Range(-0.2,-597.9891,1.133333,8645.983);
   CvL_ZHbb_tagOnly_16->SetFillColor(0);
   CvL_ZHbb_tagOnly_16->SetFillStyle(4000);
   CvL_ZHbb_tagOnly_16->SetBorderMode(0);
   CvL_ZHbb_tagOnly_16->SetBorderSize(2);
   CvL_ZHbb_tagOnly_16->SetLeftMargin(0.15);
   CvL_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   CvL_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5164 = new TH1D("Jets_cut_CvL__5164","",20,0,1);
   Jets_cut_CvL__5164->SetBinContent(1,4850.707);
   Jets_cut_CvL__5164->SetBinContent(2,7369.435);
   Jets_cut_CvL__5164->SetBinContent(3,3174.929);
   Jets_cut_CvL__5164->SetBinContent(4,1706.694);
   Jets_cut_CvL__5164->SetBinContent(5,1151.841);
   Jets_cut_CvL__5164->SetBinContent(6,923.9796);
   Jets_cut_CvL__5164->SetBinContent(7,789.3485);
   Jets_cut_CvL__5164->SetBinContent(8,708.4935);
   Jets_cut_CvL__5164->SetBinContent(9,669.5236);
   Jets_cut_CvL__5164->SetBinContent(10,661.7904);
   Jets_cut_CvL__5164->SetBinContent(11,678.1211);
   Jets_cut_CvL__5164->SetBinContent(12,707.3665);
   Jets_cut_CvL__5164->SetBinContent(13,784.0754);
   Jets_cut_CvL__5164->SetBinContent(14,879.3422);
   Jets_cut_CvL__5164->SetBinContent(15,1018.107);
   Jets_cut_CvL__5164->SetBinContent(16,1217.698);
   Jets_cut_CvL__5164->SetBinContent(17,1482.829);
   Jets_cut_CvL__5164->SetBinContent(18,1912.456);
   Jets_cut_CvL__5164->SetBinContent(19,2447.907);
   Jets_cut_CvL__5164->SetBinContent(20,3760.932);
   Jets_cut_CvL__5164->SetBinError(1,3.823051);
   Jets_cut_CvL__5164->SetBinError(2,4.831689);
   Jets_cut_CvL__5164->SetBinError(3,3.282301);
   Jets_cut_CvL__5164->SetBinError(4,2.463065);
   Jets_cut_CvL__5164->SetBinError(5,2.061608);
   Jets_cut_CvL__5164->SetBinError(6,1.861969);
   Jets_cut_CvL__5164->SetBinError(7,1.730567);
   Jets_cut_CvL__5164->SetBinError(8,1.648769);
   Jets_cut_CvL__5164->SetBinError(9,1.606352);
   Jets_cut_CvL__5164->SetBinError(10,1.601997);
   Jets_cut_CvL__5164->SetBinError(11,1.623885);
   Jets_cut_CvL__5164->SetBinError(12,1.65945);
   Jets_cut_CvL__5164->SetBinError(13,1.753814);
   Jets_cut_CvL__5164->SetBinError(14,1.858762);
   Jets_cut_CvL__5164->SetBinError(15,1.99914);
   Jets_cut_CvL__5164->SetBinError(16,2.184848);
   Jets_cut_CvL__5164->SetBinError(17,2.408005);
   Jets_cut_CvL__5164->SetBinError(18,2.737478);
   Jets_cut_CvL__5164->SetBinError(19,3.094183);
   Jets_cut_CvL__5164->SetBinError(20,3.80358);
   Jets_cut_CvL__5164->SetEntries(3.486917e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5164->SetLineColor(ci);
   Jets_cut_CvL__5164->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5164->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5164->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5164->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5164->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5164->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5164->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5164->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5164->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5164->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5164->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5164->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5164->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5164->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5164->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHbb_tagOnly_16->Modified();
   CvL_ZHbb_tagOnly_16->cd();
   CvL_ZHbb_tagOnly_16->SetSelected(CvL_ZHbb_tagOnly_16);
}
