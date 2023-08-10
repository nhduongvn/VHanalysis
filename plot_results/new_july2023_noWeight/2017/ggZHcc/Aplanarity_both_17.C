void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 12:29:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-0.004632202,1.133333,0.04168981);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_12 = new TH1D("VbbHcc_both_Aplanarity_stack_12","",50,0,1);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(1,0.03529296);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(2,0.01204113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(3,0.007058592);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(4,0.004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(5,0.002283662);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(6,0.001038028);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(7,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(8,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(9,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(10,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinContent(11,0.0004152113);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(1,0.002706847);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(2,0.001581078);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(3,0.001210539);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(4,0.0009284407);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(5,0.0006885501);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(6,0.0004642204);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(7,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(8,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(9,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(10,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetBinError(11,0.0002935987);
   VbbHcc_both_Aplanarity_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_12->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
