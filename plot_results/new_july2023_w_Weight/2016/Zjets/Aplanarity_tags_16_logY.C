void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 10:41:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.133395,1.133333,4.16553);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_4 = new TH1D("VbbHcc_tags_Aplanarity_stack_4","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(1,1811.71);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(2,232.1389);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(3,60.10672);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(4,14.82192);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(5,7.109309);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(6,3.01509);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(7,2.632551);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(8,1.408228);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(9,0.5411026);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(10,0.374793);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(11,0.06273751);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(12,0.1497339);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(13,0.08936341);
   VbbHcc_tags_Aplanarity_stack_4->SetBinContent(14,0.07001007);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(1,32.79959);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(2,15.02033);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(3,7.844825);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(4,1.590892);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(5,1.190862);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(6,0.647878);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(7,0.7061086);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(8,0.5208294);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(9,0.2049631);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(10,0.1680429);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(11,0.06273751);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(12,0.1061714);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(13,0.08936341);
   VbbHcc_tags_Aplanarity_stack_4->SetBinError(14,0.07001007);
   VbbHcc_tags_Aplanarity_stack_4->SetEntries(14977);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_4->Draw("HIST");
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
