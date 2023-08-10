void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-1.923254,1.133333,4.427544);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,3272.769);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,343.3518);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,93.69853);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,29.41746);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,12.07332);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,7.17472);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,3.608357);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.628622);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,3.424051);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,2.480055);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.2985367);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.3364925);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.120338);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(15,0.2659134);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,47.78066);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,15.50546);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,8.301354);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,3.110232);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.945907);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,1.468021);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.864451);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.4516646);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,1.163823);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,1.318653);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.2120549);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1972353);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.120338);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(15,0.1951861);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(16,0.1030044);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(18490);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
