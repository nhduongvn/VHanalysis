#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHcc_DHZfirst_17()
{
//=========Macro generated from canvas: CvB_ZHcc_DHZfirst_17/CvB_ZHcc_DHZfirst_17
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHcc_DHZfirst_17 = new TCanvas("CvB_ZHcc_DHZfirst_17", "CvB_ZHcc_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHcc_DHZfirst_17->SetHighLightColor(2);
   CvB_ZHcc_DHZfirst_17->Range(-0.2,-42.46329,1.133333,382.1695);
   CvB_ZHcc_DHZfirst_17->SetFillColor(0);
   CvB_ZHcc_DHZfirst_17->SetFillStyle(4000);
   CvB_ZHcc_DHZfirst_17->SetBorderMode(0);
   CvB_ZHcc_DHZfirst_17->SetBorderSize(2);
   CvB_ZHcc_DHZfirst_17->SetLeftMargin(0.15);
   CvB_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   CvB_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5972 = new TH1D("Jets_cut_CvB__5972","",20,0,1);
   Jets_cut_CvB__5972->SetBinContent(1,62.17464);
   Jets_cut_CvB__5972->SetBinContent(2,12.08332);
   Jets_cut_CvB__5972->SetBinContent(3,9.604687);
   Jets_cut_CvB__5972->SetBinContent(4,9.985052);
   Jets_cut_CvB__5972->SetBinContent(5,10.87483);
   Jets_cut_CvB__5972->SetBinContent(6,11.66328);
   Jets_cut_CvB__5972->SetBinContent(7,12.92954);
   Jets_cut_CvB__5972->SetBinContent(8,14.35535);
   Jets_cut_CvB__5972->SetBinContent(9,17.79429);
   Jets_cut_CvB__5972->SetBinContent(10,21.5753);
   Jets_cut_CvB__5972->SetBinContent(11,26.29486);
   Jets_cut_CvB__5972->SetBinContent(12,32.16611);
   Jets_cut_CvB__5972->SetBinContent(13,43.95615);
   Jets_cut_CvB__5972->SetBinContent(14,57.87613);
   Jets_cut_CvB__5972->SetBinContent(15,80.45313);
   Jets_cut_CvB__5972->SetBinContent(16,114.0866);
   Jets_cut_CvB__5972->SetBinContent(17,176.926);
   Jets_cut_CvB__5972->SetBinContent(18,295.3795);
   Jets_cut_CvB__5972->SetBinContent(19,323.5298);
   Jets_cut_CvB__5972->SetBinContent(20,70.69577);
   Jets_cut_CvB__5972->SetBinError(1,0.2660071);
   Jets_cut_CvB__5972->SetBinError(2,0.1161738);
   Jets_cut_CvB__5972->SetBinError(3,0.1033);
   Jets_cut_CvB__5972->SetBinError(4,0.1053345);
   Jets_cut_CvB__5972->SetBinError(5,0.1091284);
   Jets_cut_CvB__5972->SetBinError(6,0.1127875);
   Jets_cut_CvB__5972->SetBinError(7,0.1188985);
   Jets_cut_CvB__5972->SetBinError(8,0.1231158);
   Jets_cut_CvB__5972->SetBinError(9,0.1379603);
   Jets_cut_CvB__5972->SetBinError(10,0.1524205);
   Jets_cut_CvB__5972->SetBinError(11,0.1688981);
   Jets_cut_CvB__5972->SetBinError(12,0.1874983);
   Jets_cut_CvB__5972->SetBinError(13,0.2198348);
   Jets_cut_CvB__5972->SetBinError(14,0.2531313);
   Jets_cut_CvB__5972->SetBinError(15,0.2991946);
   Jets_cut_CvB__5972->SetBinError(16,0.354392);
   Jets_cut_CvB__5972->SetBinError(17,0.4393097);
   Jets_cut_CvB__5972->SetBinError(18,0.5621232);
   Jets_cut_CvB__5972->SetBinError(19,0.5894965);
   Jets_cut_CvB__5972->SetBinError(20,0.2730864);
   Jets_cut_CvB__5972->SetEntries(2592716);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5972->SetLineColor(ci);
   Jets_cut_CvB__5972->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5972->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5972->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5972->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5972->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5972->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5972->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5972->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5972->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5972->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5972->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5972->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5972->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5972->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5972->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHcc_DHZfirst_17->Modified();
   CvB_ZHcc_DHZfirst_17->cd();
   CvB_ZHcc_DHZfirst_17->SetSelected(CvB_ZHcc_DHZfirst_17);
}
