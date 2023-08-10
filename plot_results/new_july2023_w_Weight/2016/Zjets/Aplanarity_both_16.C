void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:25:08 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-169.1109,1.133333,1521.998);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1288.464);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,411.797);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,195.8689);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,102.5348);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,53.37246);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,41.88802);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,26.69035);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,20.38456);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,10.56048);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.773878);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,8.381654);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.021681);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.872756);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.56196);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,4.110481);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.8165869);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4933998);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.3358854);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.09198592);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,26.35119);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,18.05876);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,12.56739);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,8.726899);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,4.753363);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.935087);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.13841);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.114068);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.446563);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,3.069365);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.852432);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8037709);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.6110492);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5159105);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,2.670063);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.477395);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.3111615);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.3358854);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.09198592);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15488);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_16->Modified();
   Aplanarity_both_16->cd();
   Aplanarity_both_16->SetSelected(Aplanarity_both_16);
}
