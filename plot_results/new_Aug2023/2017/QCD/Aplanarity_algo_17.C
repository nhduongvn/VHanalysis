void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Tue Aug 22 09:21:56 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-153989.6,1.133333,1385907);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,1173254);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,146034);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,35687.66);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,7565.632);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,3575.091);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,643.5055);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,378.4002);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,11.71824);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,9.013856);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,17.27555);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4.304069);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,241.5156);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,1.825068);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,36394.68);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,4742.256);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,2626.387);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,1097.834);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,1504.331);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,250.4812);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,290.181);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,6.874213);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,6.387391);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,17.27555);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,4.304069);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,236.8033);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,1.825068);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(106115);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
