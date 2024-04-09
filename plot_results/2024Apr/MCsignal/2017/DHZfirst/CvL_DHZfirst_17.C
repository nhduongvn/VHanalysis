#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_DHZfirst_17()
{
//=========Macro generated from canvas: CvL_DHZfirst_17/CvL_DHZfirst_17
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *CvL_DHZfirst_17 = new TCanvas("CvL_DHZfirst_17", "CvL_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_DHZfirst_17->SetHighLightColor(2);
   CvL_DHZfirst_17->Range(-0.2,-35.52109,1.133333,344.3378);
   CvL_DHZfirst_17->SetFillColor(0);
   CvL_DHZfirst_17->SetFillStyle(4000);
   CvL_DHZfirst_17->SetBorderMode(0);
   CvL_DHZfirst_17->SetBorderSize(2);
   CvL_DHZfirst_17->SetLeftMargin(0.15);
   CvL_DHZfirst_17->SetFrameFillStyle(1000);
   CvL_DHZfirst_17->SetFrameBorderMode(0);
   CvL_DHZfirst_17->SetFrameFillStyle(1000);
   CvL_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__380 = new TH1D("Jets_cut_CvL__380","",20,0,1);
   Jets_cut_CvL__380->SetBinContent(1,211.0505);
   Jets_cut_CvL__380->SetBinContent(2,291.8811);
   Jets_cut_CvL__380->SetBinContent(3,120.0051);
   Jets_cut_CvL__380->SetBinContent(4,61.98481);
   Jets_cut_CvL__380->SetBinContent(5,39.33667);
   Jets_cut_CvL__380->SetBinContent(6,29.84124);
   Jets_cut_CvL__380->SetBinContent(7,23.94357);
   Jets_cut_CvL__380->SetBinContent(8,20.38075);
   Jets_cut_CvL__380->SetBinContent(9,18.30751);
   Jets_cut_CvL__380->SetBinContent(10,17.35409);
   Jets_cut_CvL__380->SetBinContent(11,16.71848);
   Jets_cut_CvL__380->SetBinContent(12,16.35229);
   Jets_cut_CvL__380->SetBinContent(13,16.24654);
   Jets_cut_CvL__380->SetBinContent(14,16.62073);
   Jets_cut_CvL__380->SetBinContent(15,17.60061);
   Jets_cut_CvL__380->SetBinContent(16,19.69563);
   Jets_cut_CvL__380->SetBinContent(17,22.32966);
   Jets_cut_CvL__380->SetBinContent(18,27.33093);
   Jets_cut_CvL__380->SetBinContent(19,35.71704);
   Jets_cut_CvL__380->SetBinContent(20,125.066);
   Jets_cut_CvL__380->SetBinError(1,0.5162522);
   Jets_cut_CvL__380->SetBinError(2,0.6119228);
   Jets_cut_CvL__380->SetBinError(3,0.3963859);
   Jets_cut_CvL__380->SetBinError(4,0.2853137);
   Jets_cut_CvL__380->SetBinError(5,0.2273999);
   Jets_cut_CvL__380->SetBinError(6,0.197457);
   Jets_cut_CvL__380->SetBinError(7,0.1770672);
   Jets_cut_CvL__380->SetBinError(8,0.1632292);
   Jets_cut_CvL__380->SetBinError(9,0.1545916);
   Jets_cut_CvL__380->SetBinError(10,0.1499157);
   Jets_cut_CvL__380->SetBinError(11,0.1470503);
   Jets_cut_CvL__380->SetBinError(12,0.1452774);
   Jets_cut_CvL__380->SetBinError(13,0.1446621);
   Jets_cut_CvL__380->SetBinError(14,0.1460979);
   Jets_cut_CvL__380->SetBinError(15,0.150118);
   Jets_cut_CvL__380->SetBinError(16,0.1585949);
   Jets_cut_CvL__380->SetBinError(17,0.1692964);
   Jets_cut_CvL__380->SetBinError(18,0.1883495);
   Jets_cut_CvL__380->SetBinError(19,0.2155228);
   Jets_cut_CvL__380->SetBinError(20,0.3994294);
   Jets_cut_CvL__380->SetEntries(1023696);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__380->SetLineColor(ci);
   Jets_cut_CvL__380->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__380->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__380->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__380->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__380->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__380->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__380->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__380->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__380->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__380->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__380->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__380->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__380->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__380->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__380->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_DHZfirst_17->Modified();
   CvL_DHZfirst_17->cd();
   CvL_DHZfirst_17->SetSelected(CvL_DHZfirst_17);
}
