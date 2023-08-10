void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 10:42:27 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-3.860844,1.133333,1.982825);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_10 = new TH1D("VbbHcc_algo_Sphericity_stack_10","",25,0,1);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(1,13.02712);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(2,13.21019);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(3,7.431323);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(4,4.534509);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(5,2.56704);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(6,1.208091);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(7,0.4007133);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(8,0.1403584);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(9,0.04861228);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(10,0.0338279);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(11,0.01521119);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(12,0.009011842);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(13,0.0079501);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(14,0.003377737);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(15,0.003201847);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(16,0.001580677);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(17,0.002418743);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(18,0.001114555);
   VbbHcc_algo_Sphericity_stack_10->SetBinContent(19,0.001058164);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(1,0.07091679);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(2,0.07149165);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(3,0.0536131);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(4,0.04190961);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(5,0.03150131);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(6,0.0216081);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(7,0.01238212);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(8,0.007268497);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(9,0.004230796);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(10,0.003510226);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(11,0.002350489);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(12,0.001753106);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(13,0.001681839);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(14,0.001011848);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(15,0.0009709692);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(16,0.0006867853);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(17,0.00092183);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(18,0.0006490287);
   VbbHcc_algo_Sphericity_stack_10->SetBinError(19,0.0005317288);
   VbbHcc_algo_Sphericity_stack_10->SetEntries(112076);

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
