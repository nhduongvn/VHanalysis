void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:21:51 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-2.219237,1.133333,3.496584);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,444.0713);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,134.6541);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,69.84852);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,38.98419);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,23.42775);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,17.35114);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,11.036);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,4.882184);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,4.188602);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,2.365678);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.37003);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.181875);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.9377275);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.4186522);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.9658472);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.4921032);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.3775911);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.3123042);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(22,0.04501684);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,8.972125);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,4.936577);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,3.626076);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,2.667126);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.048652);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,1.891956);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.52617);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.936718);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.8986087);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.6382094);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.7063456);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.4874315);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.3446637);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.1697459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.4453146);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.302228);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.2898107);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.3123042);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(22,0.04501684);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(9807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
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
