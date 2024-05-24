#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WZ_tagOnly_16()
{
//=========Macro generated from canvas: CvL_WZ_tagOnly_16/CvL_WZ_tagOnly_16
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_WZ_tagOnly_16 = new TCanvas("CvL_WZ_tagOnly_16", "CvL_WZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WZ_tagOnly_16->SetHighLightColor(2);
   CvL_WZ_tagOnly_16->Range(-0.2,-144948.1,1.133333,1304533);
   CvL_WZ_tagOnly_16->SetFillColor(0);
   CvL_WZ_tagOnly_16->SetFillStyle(4000);
   CvL_WZ_tagOnly_16->SetBorderMode(0);
   CvL_WZ_tagOnly_16->SetBorderSize(2);
   CvL_WZ_tagOnly_16->SetLeftMargin(0.15);
   CvL_WZ_tagOnly_16->SetFrameFillStyle(1000);
   CvL_WZ_tagOnly_16->SetFrameBorderMode(0);
   CvL_WZ_tagOnly_16->SetFrameFillStyle(1000);
   CvL_WZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5185 = new TH1D("Jets_cut_CvL__5185","",20,0,1);
   Jets_cut_CvL__5185->SetBinContent(1,865083.8);
   Jets_cut_CvL__5185->SetBinContent(2,1104366);
   Jets_cut_CvL__5185->SetBinContent(3,392289.2);
   Jets_cut_CvL__5185->SetBinContent(4,169771.8);
   Jets_cut_CvL__5185->SetBinContent(5,93215.68);
   Jets_cut_CvL__5185->SetBinContent(6,62167.76);
   Jets_cut_CvL__5185->SetBinContent(7,45611.27);
   Jets_cut_CvL__5185->SetBinContent(8,35758.16);
   Jets_cut_CvL__5185->SetBinContent(9,30305.15);
   Jets_cut_CvL__5185->SetBinContent(10,27093.98);
   Jets_cut_CvL__5185->SetBinContent(11,25311.28);
   Jets_cut_CvL__5185->SetBinContent(12,23874.83);
   Jets_cut_CvL__5185->SetBinContent(13,23174.86);
   Jets_cut_CvL__5185->SetBinContent(14,23902.07);
   Jets_cut_CvL__5185->SetBinContent(15,25344.89);
   Jets_cut_CvL__5185->SetBinContent(16,27817.28);
   Jets_cut_CvL__5185->SetBinContent(17,31322.62);
   Jets_cut_CvL__5185->SetBinContent(18,37863.56);
   Jets_cut_CvL__5185->SetBinContent(19,46495.67);
   Jets_cut_CvL__5185->SetBinContent(20,101085.1);
   Jets_cut_CvL__5185->SetBinError(1,614.3187);
   Jets_cut_CvL__5185->SetBinError(2,690.8017);
   Jets_cut_CvL__5185->SetBinError(3,418.2011);
   Jets_cut_CvL__5185->SetBinError(4,274.7071);
   Jets_cut_CvL__5185->SetBinError(5,203.7406);
   Jets_cut_CvL__5185->SetBinError(6,166.2467);
   Jets_cut_CvL__5185->SetBinError(7,142.5427);
   Jets_cut_CvL__5185->SetBinError(8,126.3231);
   Jets_cut_CvL__5185->SetBinError(9,116.4613);
   Jets_cut_CvL__5185->SetBinError(10,110.1123);
   Jets_cut_CvL__5185->SetBinError(11,106.7401);
   Jets_cut_CvL__5185->SetBinError(12,103.906);
   Jets_cut_CvL__5185->SetBinError(13,102.4257);
   Jets_cut_CvL__5185->SetBinError(14,104.3891);
   Jets_cut_CvL__5185->SetBinError(15,107.5819);
   Jets_cut_CvL__5185->SetBinError(16,112.9544);
   Jets_cut_CvL__5185->SetBinError(17,119.9752);
   Jets_cut_CvL__5185->SetBinError(18,132.0553);
   Jets_cut_CvL__5185->SetBinError(19,146.294);
   Jets_cut_CvL__5185->SetBinError(20,213.4627);
   Jets_cut_CvL__5185->SetEntries(1.532076e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5185->SetLineColor(ci);
   Jets_cut_CvL__5185->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5185->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5185->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5185->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5185->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5185->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5185->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5185->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5185->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5185->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5185->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5185->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5185->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5185->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5185->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WZ_tagOnly_16->Modified();
   CvL_WZ_tagOnly_16->cd();
   CvL_WZ_tagOnly_16->SetSelected(CvL_WZ_tagOnly_16);
}
