void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-3.563576,1.133333,2.70847);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_9 = new TH1D("VbbHcc_tags_Aplanarity_stack_9","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(1,63.63795);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(2,4.398914);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(3,0.7929036);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(4,0.3191834);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(5,0.1514206);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(6,0.06255303);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(7,0.03742916);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(8,0.00885242);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(9,0.01503678);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(10,0.01009313);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(11,0.002853377);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(12,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetBinContent(14,0.003348055);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(1,0.4575678);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(2,0.1118489);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(3,0.04667421);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(4,0.04857688);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(5,0.02042287);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(6,0.01312511);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(7,0.009767993);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(8,0.004765699);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(9,0.006162968);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(10,0.005109062);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(11,0.002853377);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(12,0.002315574);
   VbbHcc_tags_Aplanarity_stack_9->SetBinError(14,0.003348055);
   VbbHcc_tags_Aplanarity_stack_9->SetEntries(27254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_tags_Aplanarity_stack_9->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_9->Draw("HIST");
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
