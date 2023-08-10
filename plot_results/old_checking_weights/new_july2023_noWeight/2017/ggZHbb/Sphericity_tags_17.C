void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug  3 12:23:33 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-0.8715844,1.133333,7.844259);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,6.640643);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,5.557641);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,3.07279);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,2.017153);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,1.204487);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.6866199);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.359895);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.2052396);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.1546553);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.114022);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.07670572);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.06385233);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.05099894);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.04021868);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03938943);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.02446291);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.0178289);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.0161704);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.007048634);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001658502);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001243877);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0008292511);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004146255);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.05247266);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04800354);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03569394);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02891995);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.02234751);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01687276);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01221563);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.009224836);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.008007749);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006875787);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005639517);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.005145368);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.00459842);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.004083588);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.00404127);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.003184799);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.002718881);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002589336);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.001709545);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008292511);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007181525);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0005863691);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004146255);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(49090);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
