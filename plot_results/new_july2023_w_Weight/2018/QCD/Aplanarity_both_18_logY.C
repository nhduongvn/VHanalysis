void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Thu Aug 10 10:43:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.599204,1.133333,6.232666);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,148569.7);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,39091.73);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,21772.36);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,14829.4);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,6557.535);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,2864.979);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,2968.687);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,1227.856);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,3956.88);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,800.9947);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,325.5279);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,953.2061);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,541.5935);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,155.1366);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,592.7567);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.3055015);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(17,88.54962);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,7.538753);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,34.38015);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,5563.321);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,3274.117);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,3153.49);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,2107.547);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,1665.067);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,560.5901);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,825.5175);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,407.5654);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,2032.772);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,413.6259);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,96.43374);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,711.4158);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,341.0267);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,59.12655);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,544.6279);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.3055015);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(17,55.85195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,7.538753);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,34.38015);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(10527);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
