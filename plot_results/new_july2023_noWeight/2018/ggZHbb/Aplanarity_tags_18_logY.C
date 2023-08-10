void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:31:34 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,-4.17688,1.133333,2.33514);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_10 = new TH1D("VbbHcc_tags_Aplanarity_stack_10","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(1,25.49114);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(2,2.698151);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(3,0.6253557);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(4,0.2354771);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(5,0.08703712);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(6,0.04649928);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(7,0.03099952);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(8,0.01490362);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(9,0.01371133);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(10,0.008346025);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(11,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(12,0.002384579);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(13,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(14,0.001192289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(15,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(16,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(17,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinContent(18,0.001788434);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(1,0.1232737);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(2,0.04010596);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(3,0.01930809);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(4,0.01184814);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(5,0.007203243);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(6,0.005265007);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(7,0.00429886);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(8,0.002980723);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(9,0.002859009);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(10,0.002230569);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(11,0.00133302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(12,0.001192289);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(13,0.00133302);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(14,0.0008430758);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(15,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(16,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(17,0.0005961446);
   VbbHcc_tags_Aplanarity_stack_10->SetBinError(18,0.001032553);
   VbbHcc_tags_Aplanarity_stack_10->SetEntries(49090);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
