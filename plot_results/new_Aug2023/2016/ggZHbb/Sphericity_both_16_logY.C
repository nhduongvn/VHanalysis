void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-4.379445,1.133333,1.184467);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_10 = new TH1D("VbbHcc_both_Sphericity_stack_10","",25,0,1);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(1,2.069643);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(2,2.241438);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(3,1.655534);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(4,1.291801);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(5,1.125848);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(6,0.8970191);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(7,0.7491677);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(8,0.6608439);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(9,0.5599056);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(10,0.4867138);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(11,0.418461);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(12,0.3585152);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(13,0.3034654);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(14,0.2655727);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(15,0.2148907);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(16,0.1834206);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(17,0.1276468);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(18,0.09359945);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(19,0.05666079);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(20,0.0275979);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(21,0.005276717);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(22,0.001976156);
   VbbHcc_both_Sphericity_stack_10->SetBinContent(23,0.0003005912);
   VbbHcc_both_Sphericity_stack_10->SetBinError(1,0.02645874);
   VbbHcc_both_Sphericity_stack_10->SetBinError(2,0.02733831);
   VbbHcc_both_Sphericity_stack_10->SetBinError(3,0.02355247);
   VbbHcc_both_Sphericity_stack_10->SetBinError(4,0.02081509);
   VbbHcc_both_Sphericity_stack_10->SetBinError(5,0.01944977);
   VbbHcc_both_Sphericity_stack_10->SetBinError(6,0.01737062);
   VbbHcc_both_Sphericity_stack_10->SetBinError(7,0.01585648);
   VbbHcc_both_Sphericity_stack_10->SetBinError(8,0.01488169);
   VbbHcc_both_Sphericity_stack_10->SetBinError(9,0.01374325);
   VbbHcc_both_Sphericity_stack_10->SetBinError(10,0.01279207);
   VbbHcc_both_Sphericity_stack_10->SetBinError(11,0.01186778);
   VbbHcc_both_Sphericity_stack_10->SetBinError(12,0.0109765);
   VbbHcc_both_Sphericity_stack_10->SetBinError(13,0.01012964);
   VbbHcc_both_Sphericity_stack_10->SetBinError(14,0.009474061);
   VbbHcc_both_Sphericity_stack_10->SetBinError(15,0.008495139);
   VbbHcc_both_Sphericity_stack_10->SetBinError(16,0.007818033);
   VbbHcc_both_Sphericity_stack_10->SetBinError(17,0.006572635);
   VbbHcc_both_Sphericity_stack_10->SetBinError(18,0.005579629);
   VbbHcc_both_Sphericity_stack_10->SetBinError(19,0.00430387);
   VbbHcc_both_Sphericity_stack_10->SetBinError(20,0.002998855);
   VbbHcc_both_Sphericity_stack_10->SetBinError(21,0.001296735);
   VbbHcc_both_Sphericity_stack_10->SetBinError(22,0.0008104999);
   VbbHcc_both_Sphericity_stack_10->SetBinError(23,0.0003005912);
   VbbHcc_both_Sphericity_stack_10->SetEntries(41891);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_16->Modified();
   Sphericity_both_16->cd();
   Sphericity_both_16->SetSelected(Sphericity_both_16);
}
