void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Tue Aug 22 09:17:35 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-3.724773,1.133333,5.190036);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,10495.58);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1358.802);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,317.9592);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,85.979);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,30.4057);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.21182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.265889);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.140698);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1.822233);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.7969484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.9321505);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.2204194);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.05527283);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,0.002935879);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,47.68344);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,16.63054);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,8.770001);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,4.235291);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,3.844836);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.409454);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.6807785);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.4594445);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.6933464);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4102729);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4418942);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1481518);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.05527283);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.09441023);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(152694);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_18->Modified();
   Aplanarity_algo_18->cd();
   Aplanarity_algo_18->SetSelected(Aplanarity_algo_18);
}
