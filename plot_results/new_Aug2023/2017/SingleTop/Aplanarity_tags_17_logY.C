void Aplanarity_tags_17_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_17/Aplanarity_tags_17
//=========  (Tue Aug 22 09:16:29 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_17 = new TCanvas("Aplanarity_tags_17", "Aplanarity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_17->SetHighLightColor(2);
   Aplanarity_tags_17->Range(-0.2,-2.600509,1.133333,3.75744);
   Aplanarity_tags_17->SetFillColor(0);
   Aplanarity_tags_17->SetBorderMode(0);
   Aplanarity_tags_17->SetBorderSize(2);
   Aplanarity_tags_17->SetLogy();
   Aplanarity_tags_17->SetLeftMargin(0.15);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   Aplanarity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,698.3865);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,97.95576);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,28.94621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,10.10603);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,5.838152);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.888586);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,1.415788);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.2663609);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.1659729);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.3660625);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.04289964);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.3076978);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.02169284);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.06752678);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,10.9827);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,4.093687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,2.254943);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.294484);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,1.01224);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.5440857);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.5092118);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1407831);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.0960653);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.2709391);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.03157132);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.2032147);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.02169284);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.06752678);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(11598);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->Draw("HIST");
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
