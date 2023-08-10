void Aplanarity_algo_18_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_18/Aplanarity_algo_18
//=========  (Thu Aug 10 12:21:05 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_18 = new TCanvas("Aplanarity_algo_18", "Aplanarity_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_18->SetHighLightColor(2);
   Aplanarity_algo_18->Range(-0.2,-2.299855,1.133333,5.069167);
   Aplanarity_algo_18->SetFillColor(0);
   Aplanarity_algo_18->SetBorderMode(0);
   Aplanarity_algo_18->SetBorderSize(2);
   Aplanarity_algo_18->SetLogy();
   Aplanarity_algo_18->SetLeftMargin(0.15);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   Aplanarity_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,11342.69);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,1466.79);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,343.5245);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,92.25291);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,32.92122);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,10.9895);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,3.58296);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1.236639);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,2.120268);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,0.9202442);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,0.8638402);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,0.3088156);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,0.05471136);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,-0.002990372);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,51.5941);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,17.95911);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,9.410923);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,4.53186);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,4.209741);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,1.517349);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,0.726418);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,0.5023679);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,0.7588619);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,0.4523617);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,0.4434356);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,0.1767041);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,0.05471136);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,0.1050048);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(153765);

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
