#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_SingleTop_DHZfirst_17()
{
//=========Macro generated from canvas: CvB_SingleTop_DHZfirst_17/CvB_SingleTop_DHZfirst_17
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_SingleTop_DHZfirst_17 = new TCanvas("CvB_SingleTop_DHZfirst_17", "CvB_SingleTop_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_SingleTop_DHZfirst_17->SetHighLightColor(2);
   CvB_SingleTop_DHZfirst_17->Range(-0.2,-398255.2,1.133333,4035392);
   CvB_SingleTop_DHZfirst_17->SetFillColor(0);
   CvB_SingleTop_DHZfirst_17->SetFillStyle(4000);
   CvB_SingleTop_DHZfirst_17->SetBorderMode(0);
   CvB_SingleTop_DHZfirst_17->SetBorderSize(2);
   CvB_SingleTop_DHZfirst_17->SetLeftMargin(0.15);
   CvB_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   CvB_SingleTop_DHZfirst_17->SetFrameFillStyle(1000);
   CvB_SingleTop_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5990 = new TH1D("Jets_cut_CvB__5990","",20,0,1);
   Jets_cut_CvB__5990->SetBinContent(1,3423127);
   Jets_cut_CvB__5990->SetBinContent(2,489413.5);
   Jets_cut_CvB__5990->SetBinContent(3,315153.2);
   Jets_cut_CvB__5990->SetBinContent(4,275315.4);
   Jets_cut_CvB__5990->SetBinContent(5,250739.5);
   Jets_cut_CvB__5990->SetBinContent(6,226927.6);
   Jets_cut_CvB__5990->SetBinContent(7,216108.1);
   Jets_cut_CvB__5990->SetBinContent(8,205967.5);
   Jets_cut_CvB__5990->SetBinContent(9,229549);
   Jets_cut_CvB__5990->SetBinContent(10,256050.8);
   Jets_cut_CvB__5990->SetBinContent(11,285250.1);
   Jets_cut_CvB__5990->SetBinContent(12,328432.4);
   Jets_cut_CvB__5990->SetBinContent(13,419006.2);
   Jets_cut_CvB__5990->SetBinContent(14,536372.8);
   Jets_cut_CvB__5990->SetBinContent(15,741140.7);
   Jets_cut_CvB__5990->SetBinContent(16,1040025);
   Jets_cut_CvB__5990->SetBinContent(17,1613303);
   Jets_cut_CvB__5990->SetBinContent(18,2788569);
   Jets_cut_CvB__5990->SetBinContent(19,3159589);
   Jets_cut_CvB__5990->SetBinContent(20,551543.5);
   Jets_cut_CvB__5990->SetBinError(1,593.8164);
   Jets_cut_CvB__5990->SetBinError(2,224.5712);
   Jets_cut_CvB__5990->SetBinError(3,180.9675);
   Jets_cut_CvB__5990->SetBinError(4,169.7247);
   Jets_cut_CvB__5990->SetBinError(5,163.0976);
   Jets_cut_CvB__5990->SetBinError(6,155.9185);
   Jets_cut_CvB__5990->SetBinError(7,152.7028);
   Jets_cut_CvB__5990->SetBinError(8,145.4688);
   Jets_cut_CvB__5990->SetBinError(9,156.789);
   Jets_cut_CvB__5990->SetBinError(10,169.5903);
   Jets_cut_CvB__5990->SetBinError(11,182.5615);
   Jets_cut_CvB__5990->SetBinError(12,198.664);
   Jets_cut_CvB__5990->SetBinError(13,228.0744);
   Jets_cut_CvB__5990->SetBinError(14,261.1807);
   Jets_cut_CvB__5990->SetBinError(15,309.4968);
   Jets_cut_CvB__5990->SetBinError(16,365.3606);
   Jets_cut_CvB__5990->SetBinError(17,454.7085);
   Jets_cut_CvB__5990->SetBinError(18,594.5867);
   Jets_cut_CvB__5990->SetBinError(19,625.1664);
   Jets_cut_CvB__5990->SetBinError(20,268.2471);
   Jets_cut_CvB__5990->SetEntries(3.270068e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5990->SetLineColor(ci);
   Jets_cut_CvB__5990->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5990->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5990->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5990->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5990->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5990->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5990->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5990->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5990->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5990->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5990->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5990->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5990->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5990->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5990->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_SingleTop_DHZfirst_17->Modified();
   CvB_SingleTop_DHZfirst_17->cd();
   CvB_SingleTop_DHZfirst_17->SetSelected(CvB_SingleTop_DHZfirst_17);
}
