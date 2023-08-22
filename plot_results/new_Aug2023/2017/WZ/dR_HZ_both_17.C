void dR_HZ_both_17()
{
//=========Macro generated from canvas: dR_HZ_both_17/dR_HZ_both_17
//=========  (Tue Aug 22 09:22:59 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_17 = new TCanvas("dR_HZ_both_17", "dR_HZ_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_17->SetHighLightColor(2);
   dR_HZ_both_17->Range(-1.2,-0.1174201,6.8,1.056781);
   dR_HZ_both_17->SetFillColor(0);
   dR_HZ_both_17->SetBorderMode(0);
   dR_HZ_both_17->SetBorderSize(2);
   dR_HZ_both_17->SetLeftMargin(0.15);
   dR_HZ_both_17->SetFrameBorderMode(0);
   dR_HZ_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_7 = new TH1D("VbbHcc_both_dR_HZ_stack_7","",60,0,6);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(6,0.2962674);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(7,0.2711943);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(9,0.2774426);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(10,0.5715975);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(14,0.4893548);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(15,0.2275793);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(16,0.3388179);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(18,0.269206);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(19,0.1699058);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(21,0.8946293);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(28,0.6456959);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(30,0.2167551);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(32,0.6840598);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(34,0.1753319);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(37,0.2734067);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(38,0.2454468);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(55,0.2329143);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(57,0.2333619);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(6,0.2962674);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(7,0.2711943);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(9,0.2774426);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(10,0.4064134);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(14,0.3462221);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(15,0.2275793);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(16,0.3388179);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(18,0.269206);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(19,0.1699058);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(21,0.5168085);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(28,0.3940913);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(30,0.2167551);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(32,0.4019267);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(34,0.1753319);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(37,0.2734067);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(38,0.2454468);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(55,0.2329143);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(57,0.2333619);
   VbbHcc_both_dR_HZ_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_17->Modified();
   dR_HZ_both_17->cd();
   dR_HZ_both_17->SetSelected(dR_HZ_both_17);
}
