void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Thu Aug  3 12:26:21 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-0.6432438,1.133333,5.789194);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,4.4687);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,4.900905);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,3.60131);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,2.784592);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,2.449558);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,1.957143);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,1.629263);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,1.43492);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,1.209577);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,1.061137);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.910909);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.7726035);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.6527784);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.5824333);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.4572429);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.3845133);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.2652844);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.2026892);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.1257865);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.05663374);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.01251904);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.004173012);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.001788434);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.05161387);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.05405227);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.04633467);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.04074334);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.03821375);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.03415758);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.03116531);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.02924756);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.02685299);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.02515137);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.02330308);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.02146121);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01972689);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.01863369);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.01651009);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.0151402);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.01257568);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.01099236);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.008659501);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.005810499);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.002731878);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.00157725);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.001032553);
   VbbHcc_both_Sphericity_stack_10->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
