void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Aug 10 12:20:18 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2,0.1040161,1.133333,6.197318);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,204380.2);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,21690.8);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,8460.226);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,3612.941);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,1430.215);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,368.7912);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,129.5283);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,41.82689);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,93.06479);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,45.29959);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,10.33657);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,34.15268);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,7475.741);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,2146.188);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,1406.566);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,1118.064);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,602.115);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,105.0381);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,61.3234);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,20.12974);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,58.79506);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,38.37709);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,10.33657);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,34.15268);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(10038);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,50);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
