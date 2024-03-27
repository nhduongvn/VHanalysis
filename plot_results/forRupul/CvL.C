#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL()
{
//=========Macro generated from canvas: CvL/CvL
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *CvL = new TCanvas("CvL", "CvL",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL->SetHighLightColor(2);
   CvL->Range(-0.2,-33037.45,1.133333,311259.1);
   CvL->SetFillColor(0);
   CvL->SetFillStyle(4000);
   CvL->SetBorderMode(0);
   CvL->SetBorderSize(2);
   CvL->SetLeftMargin(0.15);
   CvL->SetFrameFillStyle(1000);
   CvL->SetFrameBorderMode(0);
   CvL->SetFrameFillStyle(1000);
   CvL->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__27 = new TH1D("Jets_cut_CvL__27","",20,0,1);
   Jets_cut_CvL__27->SetBinContent(1,195931);
   Jets_cut_CvL__27->SetBinContent(2,263713.4);
   Jets_cut_CvL__27->SetBinContent(3,113512.8);
   Jets_cut_CvL__27->SetBinContent(4,57219.67);
   Jets_cut_CvL__27->SetBinContent(5,35564.32);
   Jets_cut_CvL__27->SetBinContent(6,26590.82);
   Jets_cut_CvL__27->SetBinContent(7,20968.33);
   Jets_cut_CvL__27->SetBinContent(8,17681.08);
   Jets_cut_CvL__27->SetBinContent(9,16004.19);
   Jets_cut_CvL__27->SetBinContent(10,14905.92);
   Jets_cut_CvL__27->SetBinContent(11,14628.2);
   Jets_cut_CvL__27->SetBinContent(12,13955.98);
   Jets_cut_CvL__27->SetBinContent(13,13883.69);
   Jets_cut_CvL__27->SetBinContent(14,14335.02);
   Jets_cut_CvL__27->SetBinContent(15,15356.4);
   Jets_cut_CvL__27->SetBinContent(16,17076.56);
   Jets_cut_CvL__27->SetBinContent(17,19118.39);
   Jets_cut_CvL__27->SetBinContent(18,23568.7);
   Jets_cut_CvL__27->SetBinContent(19,30493.86);
   Jets_cut_CvL__27->SetBinContent(20,105241.7);
   Jets_cut_CvL__27->SetBinError(1,529.225);
   Jets_cut_CvL__27->SetBinError(2,603.5477);
   Jets_cut_CvL__27->SetBinError(3,421.5015);
   Jets_cut_CvL__27->SetBinError(4,289.9132);
   Jets_cut_CvL__27->SetBinError(5,224.5489);
   Jets_cut_CvL__27->SetBinError(6,191.8273);
   Jets_cut_CvL__27->SetBinError(7,175.9576);
   Jets_cut_CvL__27->SetBinError(8,151.3838);
   Jets_cut_CvL__27->SetBinError(9,144.7601);
   Jets_cut_CvL__27->SetBinError(10,139.5602);
   Jets_cut_CvL__27->SetBinError(11,145.292);
   Jets_cut_CvL__27->SetBinError(12,136.4718);
   Jets_cut_CvL__27->SetBinError(13,137.493);
   Jets_cut_CvL__27->SetBinError(14,140.1913);
   Jets_cut_CvL__27->SetBinError(15,142.9677);
   Jets_cut_CvL__27->SetBinError(16,158.0652);
   Jets_cut_CvL__27->SetBinError(17,162.5892);
   Jets_cut_CvL__27->SetBinError(18,173.4625);
   Jets_cut_CvL__27->SetBinError(19,201.2455);
   Jets_cut_CvL__27->SetBinError(20,370.4865);
   Jets_cut_CvL__27->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__27->SetLineColor(ci);
   Jets_cut_CvL__27->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__27->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__27->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__27->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__27->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__27->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__27->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__27->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__27->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__27->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__27->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__27->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__27->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__27->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__27->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL->Modified();
   CvL->cd();
   CvL->SetSelected(CvL);
}
