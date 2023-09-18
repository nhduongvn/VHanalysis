#ifdef __CLING__
#pragma cling optimize(0)
#endif
void MCjet_MH_v_MZ_16()
{
//=========Macro generated from canvas: MCjet_MH_v_MZ_16/MCjet_MH_v_MZ_16
//=========  (Mon Sep 18 12:38:47 2023) by ROOT version 6.28/04
   TCanvas *MCjet_MH_v_MZ_16 = new TCanvas("MCjet_MH_v_MZ_16", "MCjet_MH_v_MZ_16",0,0,600,600);
   MCjet_MH_v_MZ_16->SetHighLightColor(2);
   MCjet_MH_v_MZ_16->Range(0,0,1,1);
   MCjet_MH_v_MZ_16->SetFillColor(0);
   MCjet_MH_v_MZ_16->SetFillStyle(4000);
   MCjet_MH_v_MZ_16->SetBorderMode(0);
   MCjet_MH_v_MZ_16->SetBorderSize(2);
   MCjet_MH_v_MZ_16->SetFrameFillStyle(1000);
   MCjet_MH_v_MZ_16->SetFrameBorderMode(0);
  
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
   
   TH2D *VbbHcc_MCjet_MH_v_MZ__4 = new TH2D("VbbHcc_MCjet_MH_v_MZ__4","",200,0,200,200,0,200);
   VbbHcc_MCjet_MH_v_MZ__4->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_MH_v_MZ__4->SetLineColor(ci);
   VbbHcc_MCjet_MH_v_MZ__4->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_MH_v_MZ__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_MH_v_MZ__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_MH_v_MZ__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_MH_v_MZ__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ__4->Draw("COL");
   center_pad->Modified();
   MCjet_MH_v_MZ_16->cd();
  
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
   
   TH1D *VbbHcc_MCjet_MH_v_MZ_py__5 = new TH1D("VbbHcc_MCjet_MH_v_MZ_py__5","",200,0,200);
   VbbHcc_MCjet_MH_v_MZ_py__5->SetStats(0);

   ci = TColor::GetColor("#333399");
   VbbHcc_MCjet_MH_v_MZ_py__5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_MH_v_MZ_py__5->SetLineColor(ci);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_MH_v_MZ_py__5->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_MH_v_MZ_py__5->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_MH_v_MZ_py__5->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_py__5->Draw("hbar");
   right_pad->Modified();
   MCjet_MH_v_MZ_16->cd();
  
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
   
   TH1D *VbbHcc_MCjet_MH_v_MZ_px__6 = new TH1D("VbbHcc_MCjet_MH_v_MZ_px__6","",200,0,200);
   VbbHcc_MCjet_MH_v_MZ_px__6->SetStats(0);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_MCjet_MH_v_MZ_px__6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_MH_v_MZ_px__6->SetLineColor(ci);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_MH_v_MZ_px__6->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_MH_v_MZ_px__6->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_MH_v_MZ_px__6->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_MH_v_MZ_px__6->Draw("bar");
   top_pad->Modified();
   MCjet_MH_v_MZ_16->cd();
   MCjet_MH_v_MZ_16->Modified();
   MCjet_MH_v_MZ_16->cd();
   MCjet_MH_v_MZ_16->SetSelected(MCjet_MH_v_MZ_16);
}
