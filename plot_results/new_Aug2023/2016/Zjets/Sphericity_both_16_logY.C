void Sphericity_both_16_logY()
{
//=========Macro generated from canvas: Sphericity_both_16/Sphericity_both_16
//=========  (Tue Aug 22 09:18:45 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_16 = new TCanvas("Sphericity_both_16", "Sphericity_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_16->SetHighLightColor(2);
   Sphericity_both_16->Range(-0.2,-0.7771925,1.133333,3.094211);
   Sphericity_both_16->SetFillColor(0);
   Sphericity_both_16->SetBorderMode(0);
   Sphericity_both_16->SetBorderSize(2);
   Sphericity_both_16->SetLogy();
   Sphericity_both_16->SetLeftMargin(0.15);
   Sphericity_both_16->SetFrameBorderMode(0);
   Sphericity_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_4 = new TH1D("VbbHcc_both_Sphericity_stack_4","",25,0,1);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(1,248.3236);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(2,268.8573);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(3,198.0239);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(4,169.7881);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(5,126.1357);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(6,106.8188);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(7,71.26469);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(8,64.30237);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(9,61.64345);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(10,48.08997);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(11,49.35021);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(12,38.73979);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(13,32.40157);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(14,29.22896);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(15,19.07437);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(16,13.78432);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(17,13.31409);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(18,9.802873);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(19,6.588031);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(20,3.190242);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(21,1.290583);
   VbbHcc_both_Sphericity_stack_4->SetBinContent(22,0.8146627);
   VbbHcc_both_Sphericity_stack_4->SetBinError(1,9.20168);
   VbbHcc_both_Sphericity_stack_4->SetBinError(2,10.04338);
   VbbHcc_both_Sphericity_stack_4->SetBinError(3,9.44667);
   VbbHcc_both_Sphericity_stack_4->SetBinError(4,8.87545);
   VbbHcc_both_Sphericity_stack_4->SetBinError(5,6.703034);
   VbbHcc_both_Sphericity_stack_4->SetBinError(6,6.44428);
   VbbHcc_both_Sphericity_stack_4->SetBinError(7,3.822914);
   VbbHcc_both_Sphericity_stack_4->SetBinError(8,3.980212);
   VbbHcc_both_Sphericity_stack_4->SetBinError(9,4.70147);
   VbbHcc_both_Sphericity_stack_4->SetBinError(10,3.749959);
   VbbHcc_both_Sphericity_stack_4->SetBinError(11,4.728435);
   VbbHcc_both_Sphericity_stack_4->SetBinError(12,3.786339);
   VbbHcc_both_Sphericity_stack_4->SetBinError(13,3.567008);
   VbbHcc_both_Sphericity_stack_4->SetBinError(14,3.215068);
   VbbHcc_both_Sphericity_stack_4->SetBinError(15,2.177889);
   VbbHcc_both_Sphericity_stack_4->SetBinError(16,2.0213);
   VbbHcc_both_Sphericity_stack_4->SetBinError(17,2.008994);
   VbbHcc_both_Sphericity_stack_4->SetBinError(18,2.121694);
   VbbHcc_both_Sphericity_stack_4->SetBinError(19,1.837052);
   VbbHcc_both_Sphericity_stack_4->SetBinError(20,1.68615);
   VbbHcc_both_Sphericity_stack_4->SetBinError(21,0.5229036);
   VbbHcc_both_Sphericity_stack_4->SetBinError(22,0.3786753);
   VbbHcc_both_Sphericity_stack_4->SetEntries(15013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_4->Draw("HIST");
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
