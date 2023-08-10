void Aplanarity_tags_16()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:27:54 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.009445,1.133333,18.085);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,15.31006);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.620517);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3755905);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1414283);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.05227475);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.0279276);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.0186184);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.008951155);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.008235063);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005012647);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001432185);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0007160924);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001074139);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.07403855);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02408776);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.0115965);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007116028);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004326289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003162178);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002581908);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001790231);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001717129);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001339686);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008006157);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0007160924);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008006157);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005063538);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0003580462);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0006201542);
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
