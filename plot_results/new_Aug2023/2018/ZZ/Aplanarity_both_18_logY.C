void Aplanarity_both_18_logY()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Tue Aug 22 09:18:50 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2,-1.243772,1.133333,2.268863);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLogy();
   Aplanarity_both_18->SetLeftMargin(0.15);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Aplanarity_stack_8 = new TH1D("VbbHcc_both_Aplanarity_stack_8","",50,0,1);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(1,43.65665);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(2,12.34903);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(3,4.102368);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(4,3.535524);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(5,1.668772);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(6,0.9313203);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(7,1.408667);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(8,0.6417413);
   VbbHcc_both_Aplanarity_stack_8->SetBinContent(11,0.2561662);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(1,3.684088);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(2,1.986372);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(3,1.077091);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(4,1.050357);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(5,0.7591625);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(6,0.54032);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(7,0.6435799);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(8,0.4590848);
   VbbHcc_both_Aplanarity_stack_8->SetBinError(11,0.2561662);
   VbbHcc_both_Aplanarity_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Aplanarity_stack_8->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetRange(1,50);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Aplanarity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Aplanarity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_8->Draw("HIST");
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
