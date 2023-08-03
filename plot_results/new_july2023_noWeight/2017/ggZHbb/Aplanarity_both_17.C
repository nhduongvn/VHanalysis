void Aplanarity_both_17()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug  3 12:26:23 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.517055,1.133333,13.6535);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_10 = new TH1D("VbbHcc_both_Aplanarity_stack_10","",50,0,1);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(1,11.55852);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(2,3.877163);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(3,2.005129);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(4,1.184171);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(5,0.7338872);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(6,0.4780632);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(7,0.3225787);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(8,0.2292879);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(9,0.1426312);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(10,0.09660775);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(11,0.06136458);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(12,0.04560881);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(13,0.03151154);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(14,0.02238978);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(15,0.00746326);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(16,0.006219383);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(17,0.007048634);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(18,0.002073128);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(19,0.001658502);
   VbbHcc_both_Aplanarity_stack_10->SetBinContent(21,0.0008292511);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(1,0.06922757);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(2,0.04009453);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(3,0.02883362);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(4,0.02215823);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(5,0.01744386);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(6,0.01407896);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(7,0.01156501);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(8,0.009750314);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(9,0.007690158);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(10,0.006328984);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(11,0.005044137);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(12,0.004348629);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(13,0.003614622);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(14,0.003046863);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(15,0.001759107);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(16,0.001605838);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(17,0.001709545);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(18,0.0009271309);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(19,0.0008292511);
   VbbHcc_both_Aplanarity_stack_10->SetBinError(21,0.0005863691);
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
