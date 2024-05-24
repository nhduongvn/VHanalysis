#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_SingleTop_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CvL_SingleTop_DHZfirst_2b1c_18/CvL_SingleTop_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvL_SingleTop_DHZfirst_2b1c_18 = new TCanvas("CvL_SingleTop_DHZfirst_2b1c_18", "CvL_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   CvL_SingleTop_DHZfirst_2b1c_18->Range(-0.2,-864331.9,1.133333,8578697);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   CvL_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   CvL_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   CvL_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CvL_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8301 = new TH1D("Jets_cut_CvL__8301","",20,0,1);
   Jets_cut_CvL__8301->SetBinContent(1,6164375);
   Jets_cut_CvL__8301->SetBinContent(2,7274660);
   Jets_cut_CvL__8301->SetBinContent(3,2997449);
   Jets_cut_CvL__8301->SetBinContent(4,1429464);
   Jets_cut_CvL__8301->SetBinContent(5,873745.9);
   Jets_cut_CvL__8301->SetBinContent(6,656451.8);
   Jets_cut_CvL__8301->SetBinContent(7,536513.4);
   Jets_cut_CvL__8301->SetBinContent(8,463955.9);
   Jets_cut_CvL__8301->SetBinContent(9,430346.9);
   Jets_cut_CvL__8301->SetBinContent(10,422575.3);
   Jets_cut_CvL__8301->SetBinContent(11,430985.4);
   Jets_cut_CvL__8301->SetBinContent(12,449135.4);
   Jets_cut_CvL__8301->SetBinContent(13,492282.7);
   Jets_cut_CvL__8301->SetBinContent(14,554664.4);
   Jets_cut_CvL__8301->SetBinContent(15,652700.6);
   Jets_cut_CvL__8301->SetBinContent(16,797856.3);
   Jets_cut_CvL__8301->SetBinContent(17,998559.8);
   Jets_cut_CvL__8301->SetBinContent(18,1336499);
   Jets_cut_CvL__8301->SetBinContent(19,1876114);
   Jets_cut_CvL__8301->SetBinContent(20,4094058);
   Jets_cut_CvL__8301->SetBinError(1,1169.293);
   Jets_cut_CvL__8301->SetBinError(2,1242.03);
   Jets_cut_CvL__8301->SetBinError(3,894.1974);
   Jets_cut_CvL__8301->SetBinError(4,600.5462);
   Jets_cut_CvL__8301->SetBinError(5,463.1375);
   Jets_cut_CvL__8301->SetBinError(6,395.0687);
   Jets_cut_CvL__8301->SetBinError(7,346.4901);
   Jets_cut_CvL__8301->SetBinError(8,319.3372);
   Jets_cut_CvL__8301->SetBinError(9,305.7576);
   Jets_cut_CvL__8301->SetBinError(10,299.2016);
   Jets_cut_CvL__8301->SetBinError(11,300.3575);
   Jets_cut_CvL__8301->SetBinError(12,299.6673);
   Jets_cut_CvL__8301->SetBinError(13,311.9688);
   Jets_cut_CvL__8301->SetBinError(14,326.697);
   Jets_cut_CvL__8301->SetBinError(15,354.8844);
   Jets_cut_CvL__8301->SetBinError(16,387.677);
   Jets_cut_CvL__8301->SetBinError(17,434.5698);
   Jets_cut_CvL__8301->SetBinError(18,500.5719);
   Jets_cut_CvL__8301->SetBinError(19,591.632);
   Jets_cut_CvL__8301->SetBinError(20,881.4188);
   Jets_cut_CvL__8301->SetEntries(4.653862e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8301->SetLineColor(ci);
   Jets_cut_CvL__8301->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8301->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8301->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8301->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8301->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8301->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8301->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8301->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8301->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8301->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8301->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8301->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8301->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8301->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8301->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_SingleTop_DHZfirst_2b1c_18->Modified();
   CvL_SingleTop_DHZfirst_2b1c_18->cd();
   CvL_SingleTop_DHZfirst_2b1c_18->SetSelected(CvL_SingleTop_DHZfirst_2b1c_18);
}
