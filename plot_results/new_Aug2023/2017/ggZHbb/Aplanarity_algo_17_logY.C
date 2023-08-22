void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-4.901094,1.133333,2.50829);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_10 = new TH1D("VbbHcc_algo_Aplanarity_stack_10","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(1,30.88893);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(2,3.436287);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(3,0.6715656);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(4,0.1418941);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(5,0.05048522);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(6,0.01258084);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(7,0.004838061);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(8,0.002702929);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(9,0.001717652);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(10,0.0007676805);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(11,0.0002733046);
   VbbHcc_algo_Aplanarity_stack_10->SetBinContent(12,0.0001383166);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(1,0.1087084);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(2,0.03589706);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(3,0.01586042);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(4,0.007231732);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(5,0.004315712);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(6,0.002144673);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(7,0.001302972);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(8,0.0009639229);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(9,0.000777169);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(10,0.0004917769);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(11,0.0002733046);
   VbbHcc_algo_Aplanarity_stack_10->SetBinError(12,0.0001383166);
   VbbHcc_algo_Aplanarity_stack_10->SetEntries(94157);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_algo_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
