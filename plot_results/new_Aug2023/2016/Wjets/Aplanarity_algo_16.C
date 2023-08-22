void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Tue Aug 22 09:21:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-680.496,1.133333,6124.464);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_5 = new TH1D("VbbHcc_algo_Aplanarity_stack_5","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(1,5184.731);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(2,595.4829);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(3,139.4333);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(4,25.25766);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(5,3.733465);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(6,2.303926);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(7,6.119159);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(8,0.4021994);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(9,0.3670403);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(10,0.2752171);
   VbbHcc_algo_Aplanarity_stack_5->SetBinContent(11,0.02210899);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(1,80.30574);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(2,33.09818);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(3,16.33687);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(4,6.422071);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(5,0.9853578);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(6,1.042758);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(7,5.527998);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(8,0.304684);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(9,0.3359955);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(10,0.2503922);
   VbbHcc_algo_Aplanarity_stack_5->SetBinError(11,0.02210899);
   VbbHcc_algo_Aplanarity_stack_5->SetEntries(66273);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_algo_Aplanarity_stack_5->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_5->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_16->Modified();
   Aplanarity_algo_16->cd();
   Aplanarity_algo_16->SetSelected(Aplanarity_algo_16);
}
