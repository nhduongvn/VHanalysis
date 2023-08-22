void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-4.413748,1.133333,1.987485);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,11.7439);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.223868);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.2856806);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1132779);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.04187615);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02089468);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01488862);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.007866487);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.006425514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.004480155);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001406901);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.00139781);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.00168743);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.000739761);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003368255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003546072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.000351307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.0007859768);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.06281771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02005578);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.009794188);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.006175264);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.003781726);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.00267374);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002260282);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001647267);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001482361);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001248845);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0007119502);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0006999055);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0007548977);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005233131);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003368255);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003546072);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.000351307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0005562562);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
