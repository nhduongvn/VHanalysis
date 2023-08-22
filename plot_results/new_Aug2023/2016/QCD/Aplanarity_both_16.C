void Aplanarity_both_16()
{
//=========Macro generated from canvas: Aplanarity_both_16/Aplanarity_both_16
//=========  (Tue Aug 22 09:23:16 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_16 = new TCanvas("Aplanarity_both_16", "Aplanarity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_16->SetHighLightColor(2);
   Aplanarity_both_16->Range(-0.2,-10753.21,1.133333,96778.89);
   Aplanarity_both_16->SetFillColor(0);
   Aplanarity_both_16->SetBorderMode(0);
   Aplanarity_both_16->SetBorderSize(2);
   Aplanarity_both_16->SetLeftMargin(0.15);
   Aplanarity_both_16->SetFrameBorderMode(0);
   Aplanarity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,81929.22);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,22816.36);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,12562.86);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,4587.672);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,4518.469);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,3260.135);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2056.656);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,818.2736);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,451.7506);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,385.5793);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,519.1234);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,41.26618);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,78.5423);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,78.93539);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,26.82709);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,5.559013);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,3.422499);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,4350.515);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,2224.334);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,1994.992);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,721.9947);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1329.265);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,749.6123);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,1086.817);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,324.4805);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,238.795);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,213.2602);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,286.1893);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,25.02299);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,34.24846);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,33.36435);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,23.79433);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,5.559013);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,3.422499);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(9183);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->Draw("HIST");
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
