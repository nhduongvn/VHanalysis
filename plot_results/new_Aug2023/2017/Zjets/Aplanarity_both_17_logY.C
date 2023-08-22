void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Tue Aug 22 09:18:49 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-1.804562,1.133333,4.018385);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_4 = new TH1D("VbbHcc_both_Aplanarity_stack_4","",50,0,1);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(1,1440.594);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(2,408.0923);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(3,179.2801);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(4,108.023);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(5,61.2139);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(6,49.00157);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(7,27.39852);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(8,18.75038);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(9,12.34865);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(10,9.134234);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(11,4.101963);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(12,3.248621);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(13,2.734313);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(14,1.348201);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(15,1.244306);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(16,0.1198845);
   VbbHcc_both_Aplanarity_stack_4->SetBinContent(17,0.1919051);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(1,22.34951);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(2,12.4019);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(3,6.71334);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(4,7.699012);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(5,4.861285);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(6,5.326277);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(7,2.999466);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(8,2.582409);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(9,1.604179);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(10,2.455466);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(11,0.862639);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(12,0.8628474);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(13,0.7968559);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(14,0.5103884);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(15,0.5630792);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(16,0.08498239);
   VbbHcc_both_Aplanarity_stack_4->SetBinError(17,0.139651);
   VbbHcc_both_Aplanarity_stack_4->SetEntries(18334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_17->Modified();
   Aplanarity_both_17->cd();
   Aplanarity_both_17->SetSelected(Aplanarity_both_17);
}
