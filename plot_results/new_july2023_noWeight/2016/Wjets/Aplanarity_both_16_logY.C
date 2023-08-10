void Aplanarity_both_16_logY()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Thu Aug 10 12:33:06 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-4.764866,1.133333,3.170602);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLogy();
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_5 = new TH1D("VbbHcc_both_Aplanarity_stack_5","",50,0,1);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(1,125.7494);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(2,34.82593);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(3,20.09372);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(4,9.986389);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(5,4.172068);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(6,3.131579);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(7,1.405025);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(8,0.6091178);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(9,0.7028154);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(10,0.162535);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(11,0.7540495);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(12,0.3463211);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(14,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(15,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinContent(17,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(1,6.172197);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(2,6.784235);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(3,6.570631);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(4,2.273599);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(5,1.195259);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(6,1.152638);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(7,0.4353416);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(8,0.2255208);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(9,0.3847521);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(10,0.1471787);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(11,0.4367692);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(12,0.2124813);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(14,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(15,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetBinError(17,0.0002136538);
   VbbHcc_both_Aplanarity_stack_5->SetEntries(3789);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_5->Draw("HIST");
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
