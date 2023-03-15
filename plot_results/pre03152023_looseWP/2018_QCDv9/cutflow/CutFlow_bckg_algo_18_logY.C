#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_algo_18_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_algo_18/CutFlow_bckg_algo_18
//=========  (Fri Mar 10 12:16:36 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_algo_18 = new TCanvas("CutFlow_bckg_algo_18", "CutFlow_bckg_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_algo_18->SetHighLightColor(2);
   CutFlow_bckg_algo_18->Range(-1.4,6.938842,7.933333,13.15305);
   CutFlow_bckg_algo_18->SetFillColor(0);
   CutFlow_bckg_algo_18->SetBorderMode(0);
   CutFlow_bckg_algo_18->SetBorderSize(2);
   CutFlow_bckg_algo_18->SetLogy();
   CutFlow_bckg_algo_18->SetLeftMargin(0.15);
   CutFlow_bckg_algo_18->SetFrameBorderMode(0);
   CutFlow_bckg_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__16 = new TH1D("VbbHcc_algo_CutFlow__16","",7,0,7);
   VbbHcc_algo_CutFlow__16->SetBinContent(1,1.79506e+12);
   VbbHcc_algo_CutFlow__16->SetBinContent(2,1.794953e+12);
   VbbHcc_algo_CutFlow__16->SetBinContent(3,3.71557e+09);
   VbbHcc_algo_CutFlow__16->SetBinContent(4,5.730782e+08);
   VbbHcc_algo_CutFlow__16->SetBinContent(5,1.154723e+08);
   VbbHcc_algo_CutFlow__16->SetBinContent(6,9.165906e+07);
   VbbHcc_algo_CutFlow__16->SetBinContent(7,7.265957e+07);
   VbbHcc_algo_CutFlow__16->SetBinError(1,1.940917e+08);
   VbbHcc_algo_CutFlow__16->SetBinError(2,1.940871e+08);
   VbbHcc_algo_CutFlow__16->SetBinError(3,2749258);
   VbbHcc_algo_CutFlow__16->SetBinError(4,1159871);
   VbbHcc_algo_CutFlow__16->SetBinError(5,533090);
   VbbHcc_algo_CutFlow__16->SetBinError(6,474563.7);
   VbbHcc_algo_CutFlow__16->SetBinError(7,438470.8);
   VbbHcc_algo_CutFlow__16->SetEntries(2.994113e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__16->SetLineColor(ci);
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetRange(1,7);
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__16->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__16->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__16->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__16->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__16->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__16->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__16->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__16->Draw("HIST");
   CutFlow_bckg_algo_18->Modified();
   CutFlow_bckg_algo_18->cd();
   CutFlow_bckg_algo_18->SetSelected(CutFlow_bckg_algo_18);
}
