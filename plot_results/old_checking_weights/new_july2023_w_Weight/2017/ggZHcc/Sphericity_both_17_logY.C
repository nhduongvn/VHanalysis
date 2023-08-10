void Sphericity_both_17_logY()
{
//=========Macro generated from canvas: Sphericity_both_17/Sphericity_both_17
//=========  (Thu Aug 10 10:43:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_17 = new TCanvas("Sphericity_both_17", "Sphericity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_17->SetHighLightColor(2);
   Sphericity_both_17->Range(-0.2,-4.414485,1.133333,-1.356648);
   Sphericity_both_17->SetFillColor(0);
   Sphericity_both_17->SetBorderMode(0);
   Sphericity_both_17->SetBorderSize(2);
   Sphericity_both_17->SetLogy();
   Sphericity_both_17->SetLeftMargin(0.15);
   Sphericity_both_17->SetFrameBorderMode(0);
   Sphericity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_12 = new TH1D("VbbHcc_both_Sphericity_stack_12","",25,0,1);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(1,0.01012762);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(2,0.01148206);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(3,0.008897696);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(4,0.005250408);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(5,0.006114123);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(6,0.005101821);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(7,0.004617556);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(8,0.004167382);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(9,0.003127385);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(10,0.002907258);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(11,0.002195087);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(12,0.002511475);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(13,0.00185851);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(14,0.00180198);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(15,0.000526737);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(16,0.00107473);
   VbbHcc_both_Sphericity_stack_12->SetBinContent(17,0.0001557144);
   VbbHcc_both_Sphericity_stack_12->SetBinError(1,0.001519247);
   VbbHcc_both_Sphericity_stack_12->SetBinError(2,0.001660578);
   VbbHcc_both_Sphericity_stack_12->SetBinError(3,0.001512501);
   VbbHcc_both_Sphericity_stack_12->SetBinError(4,0.001132142);
   VbbHcc_both_Sphericity_stack_12->SetBinError(5,0.001194221);
   VbbHcc_both_Sphericity_stack_12->SetBinError(6,0.001108187);
   VbbHcc_both_Sphericity_stack_12->SetBinError(7,0.001057903);
   VbbHcc_both_Sphericity_stack_12->SetBinError(8,0.00101645);
   VbbHcc_both_Sphericity_stack_12->SetBinError(9,0.000856992);
   VbbHcc_both_Sphericity_stack_12->SetBinError(10,0.0008863634);
   VbbHcc_both_Sphericity_stack_12->SetBinError(11,0.0007335589);
   VbbHcc_both_Sphericity_stack_12->SetBinError(12,0.0008004346);
   VbbHcc_both_Sphericity_stack_12->SetBinError(13,0.0006681701);
   VbbHcc_both_Sphericity_stack_12->SetBinError(14,0.0006490563);
   VbbHcc_both_Sphericity_stack_12->SetBinError(15,0.0003724599);
   VbbHcc_both_Sphericity_stack_12->SetBinError(16,0.0005410334);
   VbbHcc_both_Sphericity_stack_12->SetBinError(17,0.0001557144);
   VbbHcc_both_Sphericity_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Sphericity_stack_12->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_17->Modified();
   Sphericity_both_17->cd();
   Sphericity_both_17->SetSelected(Sphericity_both_17);
}
