#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_TT_DHZfirst_16()
{
//=========Macro generated from canvas: CvL_TT_DHZfirst_16/CvL_TT_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvL_TT_DHZfirst_16 = new TCanvas("CvL_TT_DHZfirst_16", "CvL_TT_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_TT_DHZfirst_16->SetHighLightColor(2);
   CvL_TT_DHZfirst_16->Range(-0.2,-2072409,1.133333,2.077571e+07);
   CvL_TT_DHZfirst_16->SetFillColor(0);
   CvL_TT_DHZfirst_16->SetFillStyle(4000);
   CvL_TT_DHZfirst_16->SetBorderMode(0);
   CvL_TT_DHZfirst_16->SetBorderSize(2);
   CvL_TT_DHZfirst_16->SetLeftMargin(0.15);
   CvL_TT_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_TT_DHZfirst_16->SetFrameBorderMode(0);
   CvL_TT_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_TT_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5956 = new TH1D("Jets_cut_CvL__5956","",20,0,1);
   Jets_cut_CvL__5956->SetBinContent(1,1.233119e+07);
   Jets_cut_CvL__5956->SetBinContent(2,1.762049e+07);
   Jets_cut_CvL__5956->SetBinContent(3,6895152);
   Jets_cut_CvL__5956->SetBinContent(4,3403146);
   Jets_cut_CvL__5956->SetBinContent(5,2135697);
   Jets_cut_CvL__5956->SetBinContent(6,1624270);
   Jets_cut_CvL__5956->SetBinContent(7,1332193);
   Jets_cut_CvL__5956->SetBinContent(8,1153606);
   Jets_cut_CvL__5956->SetBinContent(9,1068478);
   Jets_cut_CvL__5956->SetBinContent(10,1041359);
   Jets_cut_CvL__5956->SetBinContent(11,1052654);
   Jets_cut_CvL__5956->SetBinContent(12,1088120);
   Jets_cut_CvL__5956->SetBinContent(13,1185510);
   Jets_cut_CvL__5956->SetBinContent(14,1318602);
   Jets_cut_CvL__5956->SetBinContent(15,1520605);
   Jets_cut_CvL__5956->SetBinContent(16,1817315);
   Jets_cut_CvL__5956->SetBinContent(17,2210993);
   Jets_cut_CvL__5956->SetBinContent(18,2856704);
   Jets_cut_CvL__5956->SetBinContent(19,3696168);
   Jets_cut_CvL__5956->SetBinContent(20,6044110);
   Jets_cut_CvL__5956->SetBinError(1,912.6695);
   Jets_cut_CvL__5956->SetBinError(2,1100.393);
   Jets_cut_CvL__5956->SetBinError(3,703.536);
   Jets_cut_CvL__5956->SetBinError(4,498.0764);
   Jets_cut_CvL__5956->SetBinError(5,396.9905);
   Jets_cut_CvL__5956->SetBinError(6,347.3094);
   Jets_cut_CvL__5956->SetBinError(7,314.9379);
   Jets_cut_CvL__5956->SetBinError(8,293.5543);
   Jets_cut_CvL__5956->SetBinError(9,282.5696);
   Jets_cut_CvL__5956->SetBinError(10,279.188);
   Jets_cut_CvL__5956->SetBinError(11,280.7315);
   Jets_cut_CvL__5956->SetBinError(12,285.2989);
   Jets_cut_CvL__5956->SetBinError(13,297.7416);
   Jets_cut_CvL__5956->SetBinError(14,313.9863);
   Jets_cut_CvL__5956->SetBinError(15,336.8262);
   Jets_cut_CvL__5956->SetBinError(16,368.0531);
   Jets_cut_CvL__5956->SetBinError(17,405.642);
   Jets_cut_CvL__5956->SetBinError(18,460.8923);
   Jets_cut_CvL__5956->SetBinError(19,524.4061);
   Jets_cut_CvL__5956->SetBinError(20,668.1522);
   Jets_cut_CvL__5956->SetEntries(1.413682e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5956->SetLineColor(ci);
   Jets_cut_CvL__5956->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5956->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5956->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5956->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5956->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5956->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5956->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5956->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5956->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5956->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5956->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5956->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5956->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5956->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5956->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_TT_DHZfirst_16->Modified();
   CvL_TT_DHZfirst_16->cd();
   CvL_TT_DHZfirst_16->SetSelected(CvL_TT_DHZfirst_16);
}
