#ifdef __CLING__
#pragma cling optimize(0)
#endif
void MCjet_tagRemoved_MH_v_MZ_17()
{
//=========Macro generated from canvas: MCjet_tagRemoved_MH_v_MZ_17/MCjet_tagRemoved_MH_v_MZ_17
//=========  (Thu Sep 28 11:13:03 2023) by ROOT version 6.28/04
   TCanvas *MCjet_tagRemoved_MH_v_MZ_17 = new TCanvas("MCjet_tagRemoved_MH_v_MZ_17", "MCjet_tagRemoved_MH_v_MZ_17",0,0,600,600);
   MCjet_tagRemoved_MH_v_MZ_17->SetHighLightColor(2);
   MCjet_tagRemoved_MH_v_MZ_17->Range(0,0,1,1);
   MCjet_tagRemoved_MH_v_MZ_17->SetFillColor(0);
   MCjet_tagRemoved_MH_v_MZ_17->SetFillStyle(4000);
   MCjet_tagRemoved_MH_v_MZ_17->SetBorderMode(0);
   MCjet_tagRemoved_MH_v_MZ_17->SetBorderSize(2);
   MCjet_tagRemoved_MH_v_MZ_17->SetFrameFillStyle(1000);
   MCjet_tagRemoved_MH_v_MZ_17->SetFrameBorderMode(0);
  
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
   
   TH2D *VbbHcc_MCjet_tagRemoved_MH_v_MZ__25 = new TH2D("VbbHcc_MCjet_tagRemoved_MH_v_MZ__25","",200,0,200,200,0,200);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->SetLineColor(ci);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetYaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ__25->Draw("COL");
   center_pad->Modified();
   MCjet_tagRemoved_MH_v_MZ_17->cd();
  
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
   
   TH1D *VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26 = new TH1D("VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26","",200,0,200);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->SetStats(0);

   ci = TColor::GetColor("#333399");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->SetLineColor(ci);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetXaxis()->SetTitle("m_{Z} [GeV]");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_py__26->Draw("hbar");
   right_pad->Modified();
   MCjet_tagRemoved_MH_v_MZ_17->cd();
  
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
   
   TH1D *VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27 = new TH1D("VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27","",200,0,200);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->SetStats(0);

   ci = TColor::GetColor("#0000cc");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->SetLineColor(ci);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetXaxis()->SetTitle("m_{H} [GeV]");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetXaxis()->SetRange(1,200);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetXaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetXaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetXaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetYaxis()->SetTitle("Events / 1.0 GeV");
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetYaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetYaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetZaxis()->SetLabelFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetZaxis()->SetTitleOffset(1);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->GetZaxis()->SetTitleFont(42);
   VbbHcc_MCjet_tagRemoved_MH_v_MZ_px__27->Draw("bar");
   top_pad->Modified();
   MCjet_tagRemoved_MH_v_MZ_17->cd();
   MCjet_tagRemoved_MH_v_MZ_17->Modified();
   MCjet_tagRemoved_MH_v_MZ_17->cd();
   MCjet_tagRemoved_MH_v_MZ_17->SetSelected(MCjet_tagRemoved_MH_v_MZ_17);
}
