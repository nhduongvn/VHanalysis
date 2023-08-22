void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.227325,1.133333,11.04593);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,9.351048);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,9.348489);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,5.26689);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,3.233178);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,1.845137);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,0.8766404);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.289099);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1009097);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.03554497);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.02607001);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01208605);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.006124968);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.006491865);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.002412501);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.002120511);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001406261);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002184699);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.0003642251);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.000968384);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.05564801);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.05531196);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.0416106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.03269553);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.02473485);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.01710781);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.009777263);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.005745119);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.00337284);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.002902379);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.00195799);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.00136264);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001434943);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.0008175287);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0007338342);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0006095057);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.0008325399);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0003642251);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0004861455);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(94157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
