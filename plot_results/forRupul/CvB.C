#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB()
{
//=========Macro generated from canvas: CvB/CvB
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *CvB = new TCanvas("CvB", "CvB",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB->SetHighLightColor(2);
   CvB->Range(-0.2,-32260.31,1.133333,290342.8);
   CvB->SetFillColor(0);
   CvB->SetFillStyle(4000);
   CvB->SetBorderMode(0);
   CvB->SetBorderSize(2);
   CvB->SetLeftMargin(0.15);
   CvB->SetFrameFillStyle(1000);
   CvB->SetFrameBorderMode(0);
   CvB->SetFrameFillStyle(1000);
   CvB->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__28 = new TH1D("Jets_cut_CvB__28","",20,0,1);
   Jets_cut_CvB__28->SetBinContent(1,42714.88);
   Jets_cut_CvB__28->SetBinContent(2,8501.444);
   Jets_cut_CvB__28->SetBinContent(3,6619.471);
   Jets_cut_CvB__28->SetBinContent(4,6967.087);
   Jets_cut_CvB__28->SetBinContent(5,7574.881);
   Jets_cut_CvB__28->SetBinContent(6,8354.528);
   Jets_cut_CvB__28->SetBinContent(7,9098.316);
   Jets_cut_CvB__28->SetBinContent(8,10426.46);
   Jets_cut_CvB__28->SetBinContent(9,12812.28);
   Jets_cut_CvB__28->SetBinContent(10,15707.5);
   Jets_cut_CvB__28->SetBinContent(11,18682.68);
   Jets_cut_CvB__28->SetBinContent(12,23171.93);
   Jets_cut_CvB__28->SetBinContent(13,31232.87);
   Jets_cut_CvB__28->SetBinContent(14,41713.49);
   Jets_cut_CvB__28->SetBinContent(15,57479.13);
   Jets_cut_CvB__28->SetBinContent(16,82953.48);
   Jets_cut_CvB__28->SetBinContent(17,128621);
   Jets_cut_CvB__28->SetBinContent(18,217687);
   Jets_cut_CvB__28->SetBinContent(19,245792.8);
   Jets_cut_CvB__28->SetBinContent(20,53638.94);
   Jets_cut_CvB__28->SetBinError(1,244.6786);
   Jets_cut_CvB__28->SetBinError(2,104.2377);
   Jets_cut_CvB__28->SetBinError(3,90.73358);
   Jets_cut_CvB__28->SetBinError(4,94.14111);
   Jets_cut_CvB__28->SetBinError(5,96.62482);
   Jets_cut_CvB__28->SetBinError(6,106.5764);
   Jets_cut_CvB__28->SetBinError(7,108.0102);
   Jets_cut_CvB__28->SetBinError(8,117.4945);
   Jets_cut_CvB__28->SetBinError(9,132.2208);
   Jets_cut_CvB__28->SetBinError(10,149.6733);
   Jets_cut_CvB__28->SetBinError(11,157.3533);
   Jets_cut_CvB__28->SetBinError(12,182.5251);
   Jets_cut_CvB__28->SetBinError(13,206.0734);
   Jets_cut_CvB__28->SetBinError(14,248.8501);
   Jets_cut_CvB__28->SetBinError(15,282.9182);
   Jets_cut_CvB__28->SetBinError(16,342.551);
   Jets_cut_CvB__28->SetBinError(17,419.6302);
   Jets_cut_CvB__28->SetBinError(18,557.8534);
   Jets_cut_CvB__28->SetBinError(19,588.9939);
   Jets_cut_CvB__28->SetBinError(20,278.6743);
   Jets_cut_CvB__28->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__28->SetLineColor(ci);
   Jets_cut_CvB__28->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__28->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__28->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__28->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__28->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__28->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__28->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__28->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__28->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__28->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__28->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__28->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__28->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__28->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__28->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB->Modified();
   CvB->cd();
   CvB->SetSelected(CvB);
}
