#ifdef __CLING__
#pragma cling optimize(0)
#endif
void MCjet_fixed_MH_v_MZ_17()
{
//=========Macro generated from canvas: MCjet_fixed_MH_v_MZ_17/MCjet_fixed_MH_v_MZ_17
//=========  (Thu Sep 28 11:13:04 2023) by ROOT version 6.28/04
   TCanvas *MCjet_fixed_MH_v_MZ_17 = new TCanvas("MCjet_fixed_MH_v_MZ_17", "MCjet_fixed_MH_v_MZ_17",0,0,600,600);
   MCjet_fixed_MH_v_MZ_17->SetHighLightColor(2);
   MCjet_fixed_MH_v_MZ_17->Range(0,0,1,1);
   MCjet_fixed_MH_v_MZ_17->SetFillColor(0);
   MCjet_fixed_MH_v_MZ_17->SetFillStyle(4000);
   MCjet_fixed_MH_v_MZ_17->SetBorderMode(0);
   MCjet_fixed_MH_v_MZ_17->SetBorderSize(2);
   MCjet_fixed_MH_v_MZ_17->SetFrameFillStyle(1000);
   MCjet_fixed_MH_v_MZ_17->SetFrameBorderMode(0);
  
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
   
   TH2D *VbbHcc_MCjet_fixed_MH_v_MZ__61 = new TH2D("VbbHcc_MCjet_fixed_MH_v_MZ__61","",200,0,200,200,0,200);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_fixed_MH_v_MZ__61->SetLineColor(ci);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ__61->Draw("COL");
   center_pad->Modified();
   MCjet_fixed_MH_v_MZ_17->cd();
  
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
   
   TH1D *VbbHcc_MCjet_fixed_MH_v_MZ_py__62 = new TH1D("VbbHcc_MCjet_fixed_MH_v_MZ_py__62","",200,0,200);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->SetStats(0);

   ci = TColor::GetColor("#333399");
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->SetLineColor(ci);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_py__62->Draw("hbar");
   right_pad->Modified();
   MCjet_fixed_MH_v_MZ_17->cd();
  
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
   
   TH1D *VbbHcc_MCjet_fixed_MH_v_MZ_px__63 = new TH1D("VbbHcc_MCjet_fixed_MH_v_MZ_px__63","",200,0,200);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->SetStats(0);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->SetLineColor(ci);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_fixed_MH_v_MZ_px__63->Draw("bar");
   top_pad->Modified();
   MCjet_fixed_MH_v_MZ_17->cd();
   MCjet_fixed_MH_v_MZ_17->Modified();
   MCjet_fixed_MH_v_MZ_17->cd();
   MCjet_fixed_MH_v_MZ_17->SetSelected(MCjet_fixed_MH_v_MZ_17);
}
