void Aplanarity_tags_16_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_16/Aplanarity_tags_16
//=========  (Thu Aug 10 10:41:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_16 = new TCanvas("Aplanarity_tags_16", "Aplanarity_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_16->SetHighLightColor(2);
   Aplanarity_tags_16->Range(-0.2,-2.177658,1.133333,3.628871);
   Aplanarity_tags_16->SetFillColor(0);
   Aplanarity_tags_16->SetBorderMode(0);
   Aplanarity_tags_16->SetBorderSize(2);
   Aplanarity_tags_16->SetLogy();
   Aplanarity_tags_16->SetLeftMargin(0.15);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   Aplanarity_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,589.7522);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,75.30682);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,21.90621);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,9.567767);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,3.590555);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,1.606236);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,2.25905);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.4176743);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.4609641);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.05137638);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.10421);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.05058542);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,10.40302);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,3.619544);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,1.912979);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,1.347276);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.7755309);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.4133156);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.7313315);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.1483565);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.2799155);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.05137638);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.07387695);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.05058542);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(9214);

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
