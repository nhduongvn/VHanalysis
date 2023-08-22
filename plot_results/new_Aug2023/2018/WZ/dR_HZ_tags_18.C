void dR_HZ_tags_18()
{
//=========Macro generated from canvas: dR_HZ_tags_18/dR_HZ_tags_18
//=========  (Tue Aug 22 09:20:32 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_18 = new TCanvas("dR_HZ_tags_18", "dR_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_18->SetHighLightColor(2);
   dR_HZ_tags_18->Range(-1.2,-0.2337329,6.8,2.103596);
   dR_HZ_tags_18->SetFillColor(0);
   dR_HZ_tags_18->SetBorderMode(0);
   dR_HZ_tags_18->SetBorderSize(2);
   dR_HZ_tags_18->SetLeftMargin(0.15);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_7 = new TH1D("VbbHcc_tags_dR_HZ_stack_7","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(6,0.09964461);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(7,0.5037459);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(10,0.5493952);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(12,0.9031088);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(21,0.3453961);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(22,0.9639771);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(24,0.4394432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(25,0.7986662);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(26,0.3429098);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(29,0.3443727);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(32,0.6872825);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(33,1.780822);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(34,0.4536609);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(35,0.360218);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(37,0.815377);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(38,0.592539);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(41,0.4702074);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(43,1.398318);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(45,0.3690103);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(60,0.3354616);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(61,0.7351962);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(6,0.09964461);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(7,0.5037459);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(10,0.5493952);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(12,0.6389024);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(21,0.3453961);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(22,0.7088987);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(24,0.4394432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(25,0.5657064);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(26,0.3429098);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(29,0.3443727);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(32,0.4859832);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(33,0.892846);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(34,0.4536609);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(35,0.360218);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(37,0.5827467);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(38,0.4252874);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(41,0.4702074);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(43,1.057152);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(45,0.3690103);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(60,0.3354616);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(61,0.538578);
   VbbHcc_tags_dR_HZ_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_18->Modified();
   dR_HZ_tags_18->cd();
   dR_HZ_tags_18->SetSelected(dR_HZ_tags_18);
}
