void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-4.03641,1.133333,1.867083);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,9.981254);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.34809);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,1.731511);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.02258);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.6337418);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4128273);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.2785599);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.1979996);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1231679);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.08342477);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.05299084);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.03938508);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.02721151);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.0193345);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.006444832);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.005370693);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.006086786);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.001790231);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001432185);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0007160924);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.05978085);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.03462327);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02489902);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.01913455);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01506349);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01215776);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.009986858);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.008419797);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.006640768);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.005465338);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.00435582);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.00375522);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003121374);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.002631092);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001519061);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001386707);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001476262);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0008006157);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0007160924);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005063538);
   VbbHcc_both_Aplanarity_stack_10->SetEntries(50200);

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
