#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WW_DHZfirst_18()
{
//=========Macro generated from canvas: CvL_WW_DHZfirst_18/CvL_WW_DHZfirst_18
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvL_WW_DHZfirst_18 = new TCanvas("CvL_WW_DHZfirst_18", "CvL_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WW_DHZfirst_18->SetHighLightColor(2);
   CvL_WW_DHZfirst_18->Range(-0.2,-285785,1.133333,2572065);
   CvL_WW_DHZfirst_18->SetFillColor(0);
   CvL_WW_DHZfirst_18->SetFillStyle(4000);
   CvL_WW_DHZfirst_18->SetBorderMode(0);
   CvL_WW_DHZfirst_18->SetBorderSize(2);
   CvL_WW_DHZfirst_18->SetLeftMargin(0.15);
   CvL_WW_DHZfirst_18->SetFrameFillStyle(1000);
   CvL_WW_DHZfirst_18->SetFrameBorderMode(0);
   CvL_WW_DHZfirst_18->SetFrameFillStyle(1000);
   CvL_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5964 = new TH1D("Jets_cut_CvL__5964","",20,0,1);
   Jets_cut_CvL__5964->SetBinContent(1,1978964);
   Jets_cut_CvL__5964->SetBinContent(2,2177410);
   Jets_cut_CvL__5964->SetBinContent(3,839478.3);
   Jets_cut_CvL__5964->SetBinContent(4,358148.6);
   Jets_cut_CvL__5964->SetBinContent(5,193626.6);
   Jets_cut_CvL__5964->SetBinContent(6,128997.2);
   Jets_cut_CvL__5964->SetBinContent(7,92730.87);
   Jets_cut_CvL__5964->SetBinContent(8,71358.83);
   Jets_cut_CvL__5964->SetBinContent(9,59176.78);
   Jets_cut_CvL__5964->SetBinContent(10,52056.01);
   Jets_cut_CvL__5964->SetBinContent(11,46247.2);
   Jets_cut_CvL__5964->SetBinContent(12,42136.81);
   Jets_cut_CvL__5964->SetBinContent(13,38697.86);
   Jets_cut_CvL__5964->SetBinContent(14,36589.8);
   Jets_cut_CvL__5964->SetBinContent(15,36950.48);
   Jets_cut_CvL__5964->SetBinContent(16,38116.41);
   Jets_cut_CvL__5964->SetBinContent(17,40381.9);
   Jets_cut_CvL__5964->SetBinContent(18,45453.12);
   Jets_cut_CvL__5964->SetBinContent(19,54979.48);
   Jets_cut_CvL__5964->SetBinContent(20,222627.7);
   Jets_cut_CvL__5964->SetBinError(1,1131.839);
   Jets_cut_CvL__5964->SetBinError(2,1175.002);
   Jets_cut_CvL__5964->SetBinError(3,830.1115);
   Jets_cut_CvL__5964->SetBinError(4,533.6556);
   Jets_cut_CvL__5964->SetBinError(5,393.3947);
   Jets_cut_CvL__5964->SetBinError(6,323.9479);
   Jets_cut_CvL__5964->SetBinError(7,277.9398);
   Jets_cut_CvL__5964->SetBinError(8,240.5926);
   Jets_cut_CvL__5964->SetBinError(9,218.7978);
   Jets_cut_CvL__5964->SetBinError(10,197.7243);
   Jets_cut_CvL__5964->SetBinError(11,189.6419);
   Jets_cut_CvL__5964->SetBinError(12,187.6995);
   Jets_cut_CvL__5964->SetBinError(13,169.3391);
   Jets_cut_CvL__5964->SetBinError(14,169.4507);
   Jets_cut_CvL__5964->SetBinError(15,168.422);
   Jets_cut_CvL__5964->SetBinError(16,167.3962);
   Jets_cut_CvL__5964->SetBinError(17,173.2108);
   Jets_cut_CvL__5964->SetBinError(18,176.4105);
   Jets_cut_CvL__5964->SetBinError(19,203.5707);
   Jets_cut_CvL__5964->SetBinError(20,394.127);
   Jets_cut_CvL__5964->SetEntries(1.401267e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5964->SetLineColor(ci);
   Jets_cut_CvL__5964->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5964->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5964->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5964->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5964->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5964->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5964->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5964->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5964->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5964->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5964->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5964->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5964->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5964->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5964->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WW_DHZfirst_18->Modified();
   CvL_WW_DHZfirst_18->cd();
   CvL_WW_DHZfirst_18->SetSelected(CvL_WW_DHZfirst_18);
}
