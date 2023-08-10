void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 10:43:28 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-4.004483,1.133333,1.892919);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,10.60792);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.56322);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.844617);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.087616);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.6761729);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4368975);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2975579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2112579);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.130829);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.08798421);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05601734);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04236544);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02900905);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02008572);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.006979479);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.005743726);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.006312252);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001919515);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001617081);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0007696387);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.06406835);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03715691);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02674847);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02051852);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.0161992);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01301331);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01074611);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.009059993);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.007117597);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005851209);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.004656969);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004069512);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003349075);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002780029);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001646997);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001487658);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001548202);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0008589504);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008090303);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005442168);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_10->Draw("HIST");
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
