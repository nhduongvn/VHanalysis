void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:30 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-4.350031,1.133333,2.051202);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,13.5997);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,1.417267);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.3308245);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.1311784);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.04849352);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.02419651);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.01724136);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.009109568);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.007440889);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.00518812);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.001629223);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.001618695);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.001954082);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.0008566598);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0003900514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0004106431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0004068213);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.0009101788);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.07274431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.02322505);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01134189);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.007151095);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.004379324);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.003096251);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.002617458);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.001907572);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.001716608);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.00144619);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.0008244543);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.0008105063);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.0008741885);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0006060083);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0003900514);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0004106431);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0004068213);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.0006441572);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(40948);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_17->Modified();
   Aplanarity_tags_17->cd();
   Aplanarity_tags_17->SetSelected(Aplanarity_tags_17);
}
