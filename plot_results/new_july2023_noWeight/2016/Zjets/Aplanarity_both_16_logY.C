void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-2.003711,1.133333,3.960867);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1221.407);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,382.1687);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,185.5544);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,90.5721);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,52.41658);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,40.61355);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,25.62788);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,19.67612);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,9.744204);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.277874);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,8.523583);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,2.812668);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,1.731272);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.440028);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,4.044728);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.7039117);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.4909697);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(18,0.279517);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(20,0.07830265);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,25.6511);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,17.20188);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,12.3924);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,7.507409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,5.457303);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.875231);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,4.262709);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,4.121406);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.300692);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.89192);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,2.893053);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.7415448);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.5487884);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.4704677);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,2.73211);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.4084398);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.3051648);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(18,0.279517);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(20,0.07830265);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(15464);

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
