#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WJets_DHZfirst_16()
{
//=========Macro generated from canvas: CvB_WJets_DHZfirst_16/CvB_WJets_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_WJets_DHZfirst_16 = new TCanvas("CvB_WJets_DHZfirst_16", "CvB_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WJets_DHZfirst_16->SetHighLightColor(2);
   CvB_WJets_DHZfirst_16->Range(-0.2,-1.23742e+07,1.133333,1.113678e+08);
   CvB_WJets_DHZfirst_16->SetFillColor(0);
   CvB_WJets_DHZfirst_16->SetFillStyle(4000);
   CvB_WJets_DHZfirst_16->SetBorderMode(0);
   CvB_WJets_DHZfirst_16->SetBorderSize(2);
   CvB_WJets_DHZfirst_16->SetLeftMargin(0.15);
   CvB_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_16->SetFrameBorderMode(0);
   CvB_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5980 = new TH1D("Jets_cut_CvB__5980","",20,0,1);
   Jets_cut_CvB__5980->SetBinContent(1,1802087);
   Jets_cut_CvB__5980->SetBinContent(2,594393.4);
   Jets_cut_CvB__5980->SetBinContent(3,565596.5);
   Jets_cut_CvB__5980->SetBinContent(4,648227.9);
   Jets_cut_CvB__5980->SetBinContent(5,813580.8);
   Jets_cut_CvB__5980->SetBinContent(6,1017270);
   Jets_cut_CvB__5980->SetBinContent(7,1239097);
   Jets_cut_CvB__5980->SetBinContent(8,1590590);
   Jets_cut_CvB__5980->SetBinContent(9,2139664);
   Jets_cut_CvB__5980->SetBinContent(10,3037137);
   Jets_cut_CvB__5980->SetBinContent(11,4162518);
   Jets_cut_CvB__5980->SetBinContent(12,5587051);
   Jets_cut_CvB__5980->SetBinContent(13,8153797);
   Jets_cut_CvB__5980->SetBinContent(14,1.208061e+07);
   Jets_cut_CvB__5980->SetBinContent(15,1.915794e+07);
   Jets_cut_CvB__5980->SetBinContent(16,3.023371e+07);
   Jets_cut_CvB__5980->SetBinContent(17,5.150692e+07);
   Jets_cut_CvB__5980->SetBinContent(18,9.30348e+07);
   Jets_cut_CvB__5980->SetBinContent(19,9.427958e+07);
   Jets_cut_CvB__5980->SetBinContent(20,1.551598e+07);
   Jets_cut_CvB__5980->SetBinError(1,3670.344);
   Jets_cut_CvB__5980->SetBinError(2,2178.794);
   Jets_cut_CvB__5980->SetBinError(3,2161.845);
   Jets_cut_CvB__5980->SetBinError(4,2312.827);
   Jets_cut_CvB__5980->SetBinError(5,2616.615);
   Jets_cut_CvB__5980->SetBinError(6,2943.49);
   Jets_cut_CvB__5980->SetBinError(7,3247.516);
   Jets_cut_CvB__5980->SetBinError(8,3689.826);
   Jets_cut_CvB__5980->SetBinError(9,4273.539);
   Jets_cut_CvB__5980->SetBinError(10,5103.799);
   Jets_cut_CvB__5980->SetBinError(11,5997.512);
   Jets_cut_CvB__5980->SetBinError(12,6923.94);
   Jets_cut_CvB__5980->SetBinError(13,8361.168);
   Jets_cut_CvB__5980->SetBinError(14,10172.92);
   Jets_cut_CvB__5980->SetBinError(15,12753.87);
   Jets_cut_CvB__5980->SetBinError(16,15955.23);
   Jets_cut_CvB__5980->SetBinError(17,20582.85);
   Jets_cut_CvB__5980->SetBinError(18,27509.55);
   Jets_cut_CvB__5980->SetBinError(19,28559.91);
   Jets_cut_CvB__5980->SetBinError(20,11453.8);
   Jets_cut_CvB__5980->SetEntries(3.499471e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5980->SetLineColor(ci);
   Jets_cut_CvB__5980->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5980->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5980->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5980->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5980->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5980->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5980->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5980->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5980->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5980->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5980->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5980->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5980->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5980->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5980->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WJets_DHZfirst_16->Modified();
   CvB_WJets_DHZfirst_16->cd();
   CvB_WJets_DHZfirst_16->SetSelected(CvB_WJets_DHZfirst_16);
}
