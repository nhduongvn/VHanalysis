void Aplanarity_both_17_logY()
{
//=========Macro generated from canvas: Aplanarity_both_17/Aplanarity_both_17
//=========  (Thu Aug 10 10:43:28 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_17 = new TCanvas("Aplanarity_both_17", "Aplanarity_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_17->SetHighLightColor(2);
   Aplanarity_both_17->Range(-0.2,-2.049166,1.133333,3.64068);
   Aplanarity_both_17->SetFillColor(0);
   Aplanarity_both_17->SetBorderMode(0);
   Aplanarity_both_17->SetBorderSize(2);
   Aplanarity_both_17->SetLogy();
   Aplanarity_both_17->SetLeftMargin(0.15);
   Aplanarity_both_17->SetFrameBorderMode(0);
   Aplanarity_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,622.5101);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,189.5276);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,85.26295);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,46.71048);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,36.07807);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,19.70801);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,13.73572);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,12.24698);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,6.854997);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,4.192027);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,2.423998);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,1.835722);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.891274);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.5720514);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.5730332);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.371769);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.06742158);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(18,0.06715488);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.3349459);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(21,0.06619855);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,11.02639);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,6.109001);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,4.070922);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,3.03893);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,2.779244);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,2.000578);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,1.597244);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,1.626361);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,1.20294);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,1.033982);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.6025466);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.6386759);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.4410112);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.2702389);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.3570525);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.3059373);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.06742158);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(18,0.06715488);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.3349459);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(21,0.06619855);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(12006);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->Draw("HIST");
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
