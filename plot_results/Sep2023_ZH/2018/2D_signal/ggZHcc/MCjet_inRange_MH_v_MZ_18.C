#ifdef __CLING__
#pragma cling optimize(0)
#endif
void MCjet_inRange_MH_v_MZ_18()
{
//=========Macro generated from canvas: MCjet_inRange_MH_v_MZ_18/MCjet_inRange_MH_v_MZ_18
//=========  (Thu Sep 28 11:13:04 2023) by ROOT version 6.28/04
   TCanvas *MCjet_inRange_MH_v_MZ_18 = new TCanvas("MCjet_inRange_MH_v_MZ_18", "MCjet_inRange_MH_v_MZ_18",0,0,600,600);
   MCjet_inRange_MH_v_MZ_18->SetHighLightColor(2);
   MCjet_inRange_MH_v_MZ_18->Range(0,0,1,1);
   MCjet_inRange_MH_v_MZ_18->SetFillColor(0);
   MCjet_inRange_MH_v_MZ_18->SetFillStyle(4000);
   MCjet_inRange_MH_v_MZ_18->SetBorderMode(0);
   MCjet_inRange_MH_v_MZ_18->SetBorderSize(2);
   MCjet_inRange_MH_v_MZ_18->SetFrameFillStyle(1000);
   MCjet_inRange_MH_v_MZ_18->SetFrameBorderMode(0);
  
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
   
   TH2D *VbbHcc_MCjet_inRange_MH_v_MZ__52 = new TH2D("VbbHcc_MCjet_inRange_MH_v_MZ__52","",200,0,200,200,0,200);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_inRange_MH_v_MZ__52->SetLineColor(ci);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ__52->Draw("COL");
   center_pad->Modified();
   MCjet_inRange_MH_v_MZ_18->cd();
  
// ------------>Primitives in pad: right_pad
   TPad *right_pad = new TPad("right_pad", "right_pad",0.55,0,1,0.6);
   right_pad->Draw();
   right_pad->cd();
   right_pad->Range(-1.375625,-25,1.380625,225);
   right_pad->SetFillColor(0);
   right_pad->SetBorderMode(0);
   right_pad->SetBorderSize(2);
   right_pad->SetFrameBorderMode(0);
   right_pad->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_MCjet_inRange_MH_v_MZ_py__53 = new TH1D("VbbHcc_MCjet_inRange_MH_v_MZ_py__53","",200,0,200);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->SetStats(0);

   ci = TColor::GetColor("#333399");
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->SetLineColor(ci);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_py__53->Draw("hbar");
   right_pad->Modified();
   MCjet_inRange_MH_v_MZ_18->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "top_pad",0,0.55,0.6,1);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(-25,-0.13125,225,1.18125);
   top_pad->SetFillColor(0);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   top_pad->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_MCjet_inRange_MH_v_MZ_px__54 = new TH1D("VbbHcc_MCjet_inRange_MH_v_MZ_px__54","",200,0,200);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->SetStats(0);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->SetLineColor(ci);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_inRange_MH_v_MZ_px__54->Draw("bar");
   top_pad->Modified();
   MCjet_inRange_MH_v_MZ_18->cd();
   MCjet_inRange_MH_v_MZ_18->Modified();
   MCjet_inRange_MH_v_MZ_18->cd();
   MCjet_inRange_MH_v_MZ_18->SetSelected(MCjet_inRange_MH_v_MZ_18);
}
