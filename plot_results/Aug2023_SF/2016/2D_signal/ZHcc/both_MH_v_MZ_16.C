#ifdef __CLING__
#pragma cling optimize(0)
#endif
void both_MH_v_MZ_16()
{
//=========Macro generated from canvas: both_MH_v_MZ_16/both_MH_v_MZ_16
//=========  (Thu Sep 14 10:57:44 2023) by ROOT version 6.28/04
   TCanvas *both_MH_v_MZ_16 = new TCanvas("both_MH_v_MZ_16", "both_MH_v_MZ_16",0,0,600,600);
   both_MH_v_MZ_16->SetHighLightColor(2);
   both_MH_v_MZ_16->Range(0,0,1,1);
   both_MH_v_MZ_16->SetFillColor(0);
   both_MH_v_MZ_16->SetFillStyle(4000);
   both_MH_v_MZ_16->SetBorderMode(0);
   both_MH_v_MZ_16->SetBorderSize(2);
   both_MH_v_MZ_16->SetFrameFillStyle(1000);
   both_MH_v_MZ_16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: center_pad
   TPad *center_pad = new TPad("center_pad", "center_pad",0,0,0.6,0.6);
   center_pad->Draw();
   center_pad->cd();
   center_pad->Range(-25,-25,225,225);
   center_pad->SetFillColor(0);
   center_pad->SetBorderMode(0);
   center_pad->SetBorderSize(2);
   center_pad->SetFrameBorderMode(0);
   center_pad->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_both_MH_v_MZ__1 = new TH2D("VbbHcc_both_MH_v_MZ__1","",20,0,200,20,0,200);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(145,0.7055202);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(174,0.8397517);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(208,0.8548992);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(210,2.677717);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(211,1.644085);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(212,1.533917);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(219,1.868192);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(230,0.6702011);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(233,0.6953246);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(254,0.8464803);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(278,0.7516478);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(307,1.876181);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(345,0.6229665);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(350,0.9740402);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(373,1.031652);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(407,0.7490107);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(417,0.9866408);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(432,0.6841459);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(470,0.5543439);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(473,0.7014852);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(475,0.8559236);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(476,0.6493579);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(477,0.9041639);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(480,0.9398977);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(481,0.5213051);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(482,0.5607887);
   VbbHcc_both_MH_v_MZ__1->SetBinContent(483,3.317114);
   VbbHcc_both_MH_v_MZ__1->SetBinError(145,0.7055202);
   VbbHcc_both_MH_v_MZ__1->SetBinError(174,0.8397517);
   VbbHcc_both_MH_v_MZ__1->SetBinError(208,0.8548992);
   VbbHcc_both_MH_v_MZ__1->SetBinError(210,1.573196);
   VbbHcc_both_MH_v_MZ__1->SetBinError(211,1.163109);
   VbbHcc_both_MH_v_MZ__1->SetBinError(212,1.084745);
   VbbHcc_both_MH_v_MZ__1->SetBinError(219,1.362101);
   VbbHcc_both_MH_v_MZ__1->SetBinError(230,0.6702011);
   VbbHcc_both_MH_v_MZ__1->SetBinError(233,0.6953246);
   VbbHcc_both_MH_v_MZ__1->SetBinError(254,0.8464803);
   VbbHcc_both_MH_v_MZ__1->SetBinError(278,0.7516478);
   VbbHcc_both_MH_v_MZ__1->SetBinError(307,1.345211);
   VbbHcc_both_MH_v_MZ__1->SetBinError(345,0.6229665);
   VbbHcc_both_MH_v_MZ__1->SetBinError(350,0.9740402);
   VbbHcc_both_MH_v_MZ__1->SetBinError(373,1.031652);
   VbbHcc_both_MH_v_MZ__1->SetBinError(407,0.7490107);
   VbbHcc_both_MH_v_MZ__1->SetBinError(417,0.9866408);
   VbbHcc_both_MH_v_MZ__1->SetBinError(432,0.6841459);
   VbbHcc_both_MH_v_MZ__1->SetBinError(470,0.5543439);
   VbbHcc_both_MH_v_MZ__1->SetBinError(473,0.7014852);
   VbbHcc_both_MH_v_MZ__1->SetBinError(475,0.8559236);
   VbbHcc_both_MH_v_MZ__1->SetBinError(476,0.6493579);
   VbbHcc_both_MH_v_MZ__1->SetBinError(477,0.9041639);
   VbbHcc_both_MH_v_MZ__1->SetBinError(480,0.9398977);
   VbbHcc_both_MH_v_MZ__1->SetBinError(481,0.5213051);
   VbbHcc_both_MH_v_MZ__1->SetBinError(482,0.5607887);
   VbbHcc_both_MH_v_MZ__1->SetBinError(483,1.666053);
   VbbHcc_both_MH_v_MZ__1->SetEntries(36);
   VbbHcc_both_MH_v_MZ__1->SetStats(0);
   VbbHcc_both_MH_v_MZ__1->SetContour(20);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(0,0);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(1,0.1338858);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(2,0.2677717);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(3,0.4016575);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(4,0.5355433);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(5,0.6694292);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(6,0.803315);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(7,0.9372009);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(8,1.071087);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(9,1.204973);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(10,1.338858);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(11,1.472744);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(12,1.60663);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(13,1.740516);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(14,1.874402);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(15,2.008288);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(16,2.142173);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(17,2.276059);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(18,2.409945);
   VbbHcc_both_MH_v_MZ__1->SetContourLevel(19,2.543831);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VbbHcc_both_MH_v_MZ__1->SetLineColor(ci);
   VbbHcc_both_MH_v_MZ__1->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ__1->GetXaxis()->SetRange(1,200);
   VbbHcc_both_MH_v_MZ__1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ__1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ__1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ__1->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ__1->GetYaxis()->SetRange(1,200);
   VbbHcc_both_MH_v_MZ__1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ__1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ__1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ__1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ__1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ__1->Draw("COL");
   center_pad->Modified();
   both_MH_v_MZ_16->cd();
  
// ------------>Primitives in pad: right_pad
   TPad *right_pad = new TPad("right_pad", "right_pad",0.55,0,1,0.6);
   right_pad->Draw();
   right_pad->cd();
   right_pad->Range(-1.487577,-25,13.38819,225);
   right_pad->SetFillColor(0);
   right_pad->SetBorderMode(0);
   right_pad->SetBorderSize(2);
   right_pad->SetFrameBorderMode(0);
   right_pad->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_py__2 = new TH1D("VbbHcc_both_MH_v_MZ_py__2","",20,0,200);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(6,0.7055202);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(7,0.8397517);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(9,8.57881);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(10,1.365526);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(11,0.8464803);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(12,0.7516478);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(13,1.876181);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(15,1.597007);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(16,1.031652);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(18,1.735652);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(19,0.6841459);
   VbbHcc_both_MH_v_MZ_py__2->SetBinContent(21,9.004381);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(6,0.7055202);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(7,0.8397517);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(9,2.755107);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(10,0.9657359);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(11,0.8464803);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(12,0.7516478);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(13,1.345211);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(15,1.156219);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(16,1.031652);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(18,1.23874);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(19,0.6841459);
   VbbHcc_both_MH_v_MZ_py__2->SetBinError(21,2.648876);
   VbbHcc_both_MH_v_MZ_py__2->SetEntries(23.25623);
   VbbHcc_both_MH_v_MZ_py__2->SetStats(0);

   ci = TColor::GetColor("#333399");
   VbbHcc_both_MH_v_MZ_py__2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_MH_v_MZ_py__2->SetLineColor(ci);
   VbbHcc_both_MH_v_MZ_py__2->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_both_MH_v_MZ_py__2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__2->GetYaxis()->SetTitle("Events / 10 GeV");
   VbbHcc_both_MH_v_MZ_py__2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_py__2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_py__2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_py__2->Draw("hbar");
   right_pad->Modified();
   both_MH_v_MZ_16->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "top_pad",0,0.55,0.6,1);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(-25,-0.7418307,225,6.676476);
   top_pad->SetFillColor(0);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   top_pad->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_MH_v_MZ_px__3 = new TH1D("VbbHcc_both_MH_v_MZ_px__3","",20,0,200);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(8,0.5543439);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(10,1.5251);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(11,1.450496);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(12,3.524197);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(13,3.900854);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(14,3.619068);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(15,1.52713);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(18,0.9398977);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(19,0.5213051);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(20,2.374581);
   VbbHcc_both_MH_v_MZ_px__3->SetBinContent(21,9.07978);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(8,0.5543439);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(10,1.086288);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(11,1.026206);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(12,1.78647);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(13,1.751189);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(14,1.622149);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(15,1.097998);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(18,0.9398977);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(19,0.5213051);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(20,1.403004);
   VbbHcc_both_MH_v_MZ_px__3->SetBinError(21,2.911771);
   VbbHcc_both_MH_v_MZ_px__3->SetEntries(25.22242);
   VbbHcc_both_MH_v_MZ_px__3->SetStats(0);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_MH_v_MZ_px__3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_MH_v_MZ_px__3->SetLineColor(ci);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetTitle("Events / 10 GeV");
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_MH_v_MZ_px__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_MH_v_MZ_px__3->Draw("bar");
   top_pad->Modified();
   both_MH_v_MZ_16->cd();
   both_MH_v_MZ_16->Modified();
   both_MH_v_MZ_16->cd();
   both_MH_v_MZ_16->SetSelected(both_MH_v_MZ_16);
}
