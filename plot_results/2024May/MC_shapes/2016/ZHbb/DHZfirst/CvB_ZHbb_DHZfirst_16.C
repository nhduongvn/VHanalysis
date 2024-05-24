#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHbb_DHZfirst_16()
{
//=========Macro generated from canvas: CvB_ZHbb_DHZfirst_16/CvB_ZHbb_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHbb_DHZfirst_16 = new TCanvas("CvB_ZHbb_DHZfirst_16", "CvB_ZHbb_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHbb_DHZfirst_16->SetHighLightColor(2);
   CvB_ZHbb_DHZfirst_16->Range(-0.2,-914.5073,1.133333,10442.79);
   CvB_ZHbb_DHZfirst_16->SetFillColor(0);
   CvB_ZHbb_DHZfirst_16->SetFillStyle(4000);
   CvB_ZHbb_DHZfirst_16->SetBorderMode(0);
   CvB_ZHbb_DHZfirst_16->SetBorderSize(2);
   CvB_ZHbb_DHZfirst_16->SetLeftMargin(0.15);
   CvB_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   CvB_ZHbb_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_ZHbb_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5974 = new TH1D("Jets_cut_CvB__5974","",20,0,1);
   Jets_cut_CvB__5974->SetBinContent(1,8874.405);
   Jets_cut_CvB__5974->SetBinContent(2,1560.368);
   Jets_cut_CvB__5974->SetBinContent(3,1006.999);
   Jets_cut_CvB__5974->SetBinContent(4,856.3001);
   Jets_cut_CvB__5974->SetBinContent(5,796.5876);
   Jets_cut_CvB__5974->SetBinContent(6,731.6674);
   Jets_cut_CvB__5974->SetBinContent(7,686.3708);
   Jets_cut_CvB__5974->SetBinContent(8,633.2792);
   Jets_cut_CvB__5974->SetBinContent(9,664.4263);
   Jets_cut_CvB__5974->SetBinContent(10,718.2638);
   Jets_cut_CvB__5974->SetBinContent(11,767.3478);
   Jets_cut_CvB__5974->SetBinContent(12,826.786);
   Jets_cut_CvB__5974->SetBinContent(13,986.2656);
   Jets_cut_CvB__5974->SetBinContent(14,1184.884);
   Jets_cut_CvB__5974->SetBinContent(15,1550.022);
   Jets_cut_CvB__5974->SetBinContent(16,2078.289);
   Jets_cut_CvB__5974->SetBinContent(17,3021.567);
   Jets_cut_CvB__5974->SetBinContent(18,4638.388);
   Jets_cut_CvB__5974->SetBinContent(19,4654.125);
   Jets_cut_CvB__5974->SetBinContent(20,659.2352);
   Jets_cut_CvB__5974->SetBinError(1,5.920632);
   Jets_cut_CvB__5974->SetBinError(2,2.509334);
   Jets_cut_CvB__5974->SetBinError(3,2.017626);
   Jets_cut_CvB__5974->SetBinError(4,1.852275);
   Jets_cut_CvB__5974->SetBinError(5,1.791025);
   Jets_cut_CvB__5974->SetBinError(6,1.72181);
   Jets_cut_CvB__5974->SetBinError(7,1.670856);
   Jets_cut_CvB__5974->SetBinError(8,1.536054);
   Jets_cut_CvB__5974->SetBinError(9,1.577823);
   Jets_cut_CvB__5974->SetBinError(10,1.647334);
   Jets_cut_CvB__5974->SetBinError(11,1.70107);
   Jets_cut_CvB__5974->SetBinError(12,1.758749);
   Jets_cut_CvB__5974->SetBinError(13,1.905278);
   Jets_cut_CvB__5974->SetBinError(14,2.066901);
   Jets_cut_CvB__5974->SetBinError(15,2.332139);
   Jets_cut_CvB__5974->SetBinError(16,2.638179);
   Jets_cut_CvB__5974->SetBinError(17,3.083863);
   Jets_cut_CvB__5974->SetBinError(18,3.726885);
   Jets_cut_CvB__5974->SetBinError(19,3.814945);
   Jets_cut_CvB__5974->SetBinError(20,1.335209);
   Jets_cut_CvB__5974->SetEntries(3.486917e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5974->SetLineColor(ci);
   Jets_cut_CvB__5974->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5974->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5974->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5974->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5974->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5974->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5974->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5974->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5974->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5974->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5974->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5974->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5974->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5974->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5974->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHbb_DHZfirst_16->Modified();
   CvB_ZHbb_DHZfirst_16->cd();
   CvB_ZHbb_DHZfirst_16->SetSelected(CvB_ZHbb_DHZfirst_16);
}
