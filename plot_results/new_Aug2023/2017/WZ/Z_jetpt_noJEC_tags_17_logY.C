void Z_jetpt_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_tags_17/Z_jetpt_noJEC_tags_17
//=========  (Tue Aug 22 09:16:42 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_noJEC_tags_17 = new TCanvas("Z_jetpt_noJEC_tags_17", "Z_jetpt_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_tags_17->SetHighLightColor(2);
   Z_jetpt_noJEC_tags_17->Range(-60,-1.293926,340,0.2945158);
   Z_jetpt_noJEC_tags_17->SetFillColor(0);
   Z_jetpt_noJEC_tags_17->SetBorderMode(0);
   Z_jetpt_noJEC_tags_17->SetBorderSize(2);
   Z_jetpt_noJEC_tags_17->SetLogy();
   Z_jetpt_noJEC_tags_17->SetLeftMargin(0.15);
   Z_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   Z_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_noJEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetpt_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(24,0.1465374);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(27,0.1753319);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(32,0.2275793);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(33,0.2529144);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(35,0.5583069);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(36,0.1680729);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(39,0.2557154);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(41,0.7213113);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(43,0.2673569);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(47,0.269206);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(51,0.3092329);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(54,0.3388179);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(55,0.2774426);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(57,0.24863);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(61,0.2454468);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(67,0.181553);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(69,0.3004961);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(87,0.2962674);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(90,0.2329143);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(101,0.3176054);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinContent(117,0.3158821);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(24,0.1465374);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(27,0.1753319);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(32,0.2275793);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(33,0.2529144);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(35,0.3948663);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(36,0.1680729);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(39,0.2557154);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(41,0.4183144);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(43,0.2673569);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(47,0.269206);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(51,0.3092329);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(54,0.3388179);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(55,0.2774426);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(57,0.24863);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(61,0.2454468);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(67,0.181553);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(69,0.3004961);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(87,0.2962674);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(90,0.2329143);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(101,0.3176054);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetBinError(117,0.3158821);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_tags_17->Modified();
   Z_jetpt_noJEC_tags_17->cd();
   Z_jetpt_noJEC_tags_17->SetSelected(Z_jetpt_noJEC_tags_17);
}
