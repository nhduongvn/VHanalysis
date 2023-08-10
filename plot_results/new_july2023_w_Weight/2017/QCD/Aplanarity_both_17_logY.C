void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-0.2235159,1.133333,5.981701);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,121235.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,36532.03);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,31736.01);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,7644.254);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,28008.56);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3666.247);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2148.096);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1805.63);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,1088.598);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,500.5518);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,598.8349);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,434.7106);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,29.1362);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,133.1597);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,4.989256);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,58.47237);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,8.239505);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,5.243291);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,363.4301);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4893.729);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2595.64);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,15365.85);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,1160.586);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,21692.45);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,817.14);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,626.0595);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,609.7485);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,478.0222);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,316.6741);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,347.6359);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,343.541);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,14.30458);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,47.85714);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,4.989256);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,42.82564);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,8.239505);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,5.243291);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,338.0657);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10320);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
