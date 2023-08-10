void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 12:20:17 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-4.380886,1.133333,2.141914);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,16.29614);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.720967);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3955333);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1478424);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.05499292);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02931423);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01955485);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.009386947);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.008831307);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.005419196);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001936024);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001597147);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.00186611);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008408873);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003736148);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0003933387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.000389678);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001263209);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.0794619);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02580349);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01234875);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007518959);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004588381);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003352949);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002736723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001884153);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001848582);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.001453606);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008743362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.000800525);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008346626);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0005946027);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003736148);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0003933387);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.000389678);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0007293605);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(48968);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Aplanarity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_16->Modified();
   Aplanarity_tags_16->cd();
   Aplanarity_tags_16->SetSelected(Aplanarity_tags_16);
}
