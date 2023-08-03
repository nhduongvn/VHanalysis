void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-980.2631,1.133333,8822.368);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_4 = new TH1D("VbbHcc_algo_Aplanarity_stack_4","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(1,7468.671);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(2,947.9493);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(3,190.6974);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(4,47.59554);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(5,11.94344);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(6,3.884316);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(7,0.7404363);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(8,0.7026442);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(9,0.1746112);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(10,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(11,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(12,0.528033);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(13,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinContent(18,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(1,62.55199);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(2,26.73714);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(3,10.79874);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(4,6.794113);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(5,3.098875);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(6,0.9596723);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(7,0.2680241);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(8,0.3964332);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(9,0.1269889);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(10,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(11,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(12,0.3755438);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(13,0.1083014);
   VbbHcc_algo_Aplanarity_stack_4->SetBinError(18,0.06630981);
   VbbHcc_algo_Aplanarity_stack_4->SetEntries(52708);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Aplanarity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_4->Draw("HIST");
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
