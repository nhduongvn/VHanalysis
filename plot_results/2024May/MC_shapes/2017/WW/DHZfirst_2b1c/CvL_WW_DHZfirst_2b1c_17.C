#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WW_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: CvL_WW_DHZfirst_2b1c_17/CvL_WW_DHZfirst_2b1c_17
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvL_WW_DHZfirst_2b1c_17 = new TCanvas("CvL_WW_DHZfirst_2b1c_17", "CvL_WW_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WW_DHZfirst_2b1c_17->SetHighLightColor(2);
   CvL_WW_DHZfirst_2b1c_17->Range(-0.2,-165898.4,1.133333,1493086);
   CvL_WW_DHZfirst_2b1c_17->SetFillColor(0);
   CvL_WW_DHZfirst_2b1c_17->SetFillStyle(4000);
   CvL_WW_DHZfirst_2b1c_17->SetBorderMode(0);
   CvL_WW_DHZfirst_2b1c_17->SetBorderSize(2);
   CvL_WW_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   CvL_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   CvL_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8303 = new TH1D("Jets_cut_CvL__8303","",20,0,1);
   Jets_cut_CvL__8303->SetBinContent(1,1129827);
   Jets_cut_CvL__8303->SetBinContent(2,1263988);
   Jets_cut_CvL__8303->SetBinContent(3,430342.7);
   Jets_cut_CvL__8303->SetBinContent(4,186866.1);
   Jets_cut_CvL__8303->SetBinContent(5,102869.8);
   Jets_cut_CvL__8303->SetBinContent(6,68940.69);
   Jets_cut_CvL__8303->SetBinContent(7,50439.61);
   Jets_cut_CvL__8303->SetBinContent(8,38963.35);
   Jets_cut_CvL__8303->SetBinContent(9,32460.59);
   Jets_cut_CvL__8303->SetBinContent(10,28609.96);
   Jets_cut_CvL__8303->SetBinContent(11,25752.09);
   Jets_cut_CvL__8303->SetBinContent(12,23428.43);
   Jets_cut_CvL__8303->SetBinContent(13,21429.51);
   Jets_cut_CvL__8303->SetBinContent(14,20641.59);
   Jets_cut_CvL__8303->SetBinContent(15,20844.34);
   Jets_cut_CvL__8303->SetBinContent(16,21496.88);
   Jets_cut_CvL__8303->SetBinContent(17,22642.39);
   Jets_cut_CvL__8303->SetBinContent(18,26046.25);
   Jets_cut_CvL__8303->SetBinContent(19,31558.19);
   Jets_cut_CvL__8303->SetBinContent(20,130169.3);
   Jets_cut_CvL__8303->SetBinError(1,573.5944);
   Jets_cut_CvL__8303->SetBinError(2,609.8012);
   Jets_cut_CvL__8303->SetBinError(3,365.9697);
   Jets_cut_CvL__8303->SetBinError(4,240.7832);
   Jets_cut_CvL__8303->SetBinError(5,178.577);
   Jets_cut_CvL__8303->SetBinError(6,146.2925);
   Jets_cut_CvL__8303->SetBinError(7,125.146);
   Jets_cut_CvL__8303->SetBinError(8,109.9621);
   Jets_cut_CvL__8303->SetBinError(9,100.2208);
   Jets_cut_CvL__8303->SetBinError(10,93.87809);
   Jets_cut_CvL__8303->SetBinError(11,88.9529);
   Jets_cut_CvL__8303->SetBinError(12,84.65567);
   Jets_cut_CvL__8303->SetBinError(13,80.64201);
   Jets_cut_CvL__8303->SetBinError(14,79.12293);
   Jets_cut_CvL__8303->SetBinError(15,79.19856);
   Jets_cut_CvL__8303->SetBinError(16,80.2262);
   Jets_cut_CvL__8303->SetBinError(17,82.06645);
   Jets_cut_CvL__8303->SetBinError(18,87.75756);
   Jets_cut_CvL__8303->SetBinError(19,96.28511);
   Jets_cut_CvL__8303->SetBinError(20,194.7796);
   Jets_cut_CvL__8303->SetEntries(1.415125e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8303->SetLineColor(ci);
   Jets_cut_CvL__8303->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8303->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8303->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8303->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8303->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8303->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8303->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8303->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8303->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8303->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8303->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8303->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8303->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8303->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8303->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WW_DHZfirst_2b1c_17->Modified();
   CvL_WW_DHZfirst_2b1c_17->cd();
   CvL_WW_DHZfirst_2b1c_17->SetSelected(CvL_WW_DHZfirst_2b1c_17);
}
