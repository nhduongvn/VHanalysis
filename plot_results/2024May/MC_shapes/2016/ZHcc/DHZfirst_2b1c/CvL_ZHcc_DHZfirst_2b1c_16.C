#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHcc_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: CvL_ZHcc_DHZfirst_2b1c_16/CvL_ZHcc_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHcc_DHZfirst_2b1c_16 = new TCanvas("CvL_ZHcc_DHZfirst_2b1c_16", "CvL_ZHcc_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHcc_DHZfirst_2b1c_16->SetHighLightColor(2);
   CvL_ZHcc_DHZfirst_2b1c_16->Range(-0.2,-63.16857,1.133333,568.5171);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFillColor(0);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFillStyle(4000);
   CvL_ZHcc_DHZfirst_2b1c_16->SetBorderMode(0);
   CvL_ZHcc_DHZfirst_2b1c_16->SetBorderSize(2);
   CvL_ZHcc_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvL_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__8281 = new TH1D("Jets_cut_CvL__8281","",20,0,1);
   Jets_cut_CvL__8281->SetBinContent(1,288.6654);
   Jets_cut_CvL__8281->SetBinContent(2,481.2843);
   Jets_cut_CvL__8281->SetBinContent(3,207.242);
   Jets_cut_CvL__8281->SetBinContent(4,106.0281);
   Jets_cut_CvL__8281->SetBinContent(5,65.87864);
   Jets_cut_CvL__8281->SetBinContent(6,47.11786);
   Jets_cut_CvL__8281->SetBinContent(7,39.18552);
   Jets_cut_CvL__8281->SetBinContent(8,31.68591);
   Jets_cut_CvL__8281->SetBinContent(9,29.14578);
   Jets_cut_CvL__8281->SetBinContent(10,26.51516);
   Jets_cut_CvL__8281->SetBinContent(11,24.76156);
   Jets_cut_CvL__8281->SetBinContent(12,23.46911);
   Jets_cut_CvL__8281->SetBinContent(13,22.141);
   Jets_cut_CvL__8281->SetBinContent(14,22.59155);
   Jets_cut_CvL__8281->SetBinContent(15,24.4352);
   Jets_cut_CvL__8281->SetBinContent(16,26.80947);
   Jets_cut_CvL__8281->SetBinContent(17,28.84383);
   Jets_cut_CvL__8281->SetBinContent(18,32.85677);
   Jets_cut_CvL__8281->SetBinContent(19,42.06854);
   Jets_cut_CvL__8281->SetBinContent(20,118.1338);
   Jets_cut_CvL__8281->SetBinError(1,1.274664);
   Jets_cut_CvL__8281->SetBinError(2,1.692339);
   Jets_cut_CvL__8281->SetBinError(3,1.130073);
   Jets_cut_CvL__8281->SetBinError(4,0.8155494);
   Jets_cut_CvL__8281->SetBinError(5,0.6434684);
   Jets_cut_CvL__8281->SetBinError(6,0.543702);
   Jets_cut_CvL__8281->SetBinError(7,0.5106008);
   Jets_cut_CvL__8281->SetBinError(8,0.4548051);
   Jets_cut_CvL__8281->SetBinError(9,0.4397126);
   Jets_cut_CvL__8281->SetBinError(10,0.416246);
   Jets_cut_CvL__8281->SetBinError(11,0.4022881);
   Jets_cut_CvL__8281->SetBinError(12,0.3874806);
   Jets_cut_CvL__8281->SetBinError(13,0.3746076);
   Jets_cut_CvL__8281->SetBinError(14,0.3811943);
   Jets_cut_CvL__8281->SetBinError(15,0.3972563);
   Jets_cut_CvL__8281->SetBinError(16,0.4158046);
   Jets_cut_CvL__8281->SetBinError(17,0.4299836);
   Jets_cut_CvL__8281->SetBinError(18,0.4520402);
   Jets_cut_CvL__8281->SetBinError(19,0.5177448);
   Jets_cut_CvL__8281->SetBinError(20,0.8682766);
   Jets_cut_CvL__8281->SetEntries(1296561);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__8281->SetLineColor(ci);
   Jets_cut_CvL__8281->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__8281->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__8281->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__8281->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8281->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__8281->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__8281->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__8281->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__8281->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__8281->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__8281->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__8281->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__8281->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__8281->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__8281->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHcc_DHZfirst_2b1c_16->Modified();
   CvL_ZHcc_DHZfirst_2b1c_16->cd();
   CvL_ZHcc_DHZfirst_2b1c_16->SetSelected(CvL_ZHcc_DHZfirst_2b1c_16);
}
