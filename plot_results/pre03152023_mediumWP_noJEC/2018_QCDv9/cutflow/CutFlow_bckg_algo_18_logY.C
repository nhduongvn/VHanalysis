#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_algo_18_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_algo_18/CutFlow_bckg_algo_18
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_algo_18 = new TCanvas("CutFlow_bckg_algo_18", "CutFlow_bckg_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_algo_18->SetHighLightColor(2);
   CutFlow_bckg_algo_18->Range(-1.4,5.066123,7.933333,13.36113);
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
   VbbHcc_algo_CutFlow__16->SetBinContent(3,3.715388e+09);
   VbbHcc_algo_CutFlow__16->SetBinContent(4,1.997114e+08);
   VbbHcc_algo_CutFlow__16->SetBinContent(5,2.898488e+07);
   VbbHcc_algo_CutFlow__16->SetBinContent(6,6414143);
   VbbHcc_algo_CutFlow__16->SetBinContent(7,1572728);
   VbbHcc_algo_CutFlow__16->SetBinError(1,1.923225e+08);
   VbbHcc_algo_CutFlow__16->SetBinError(2,1.92318e+08);
   VbbHcc_algo_CutFlow__16->SetBinError(3,2741523);
   VbbHcc_algo_CutFlow__16->SetBinError(4,634140.9);
   VbbHcc_algo_CutFlow__16->SetBinError(5,228496.1);
   VbbHcc_algo_CutFlow__16->SetBinError(6,102820.2);
   VbbHcc_algo_CutFlow__16->SetBinError(7,65675.27);
   VbbHcc_algo_CutFlow__16->SetEntries(2.850474e+09);

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
