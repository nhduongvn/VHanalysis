void Aplanarity_tags_17()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Thu Aug  3 12:23:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.326982,1.133333,20.94284);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,17.72939);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.876595);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.4349422);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1637771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.06053533);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.03234079);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.02156053);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01036564);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.009536387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005804758);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001658502);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008292511);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001243877);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.08573831);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02789416);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.013429);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.00824052);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.005009939);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003661874);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002989907);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002073128);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001988474);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001551387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0009271309);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0008292511);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0009271309);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005863691);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004146255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0007181525);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
