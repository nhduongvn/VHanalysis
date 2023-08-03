void Aplanarity_algo_17()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Aug  3 12:24:55 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2,-21489.38,1.133333,193404.4);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLeftMargin(0.15);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(0,0.1407128);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,163728.6);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,21486.68);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,4332.984);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,1178.216);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,391.9708);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,151.0311);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,68.58769);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,32.02488);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,16.56183);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,9.934625);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,5.844615);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,3.198908);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,2.43449);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,1.043655);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,0.3893346);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.4056983);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.3705582);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3259919);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.2298455);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(21,0.07035638);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04456635);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(0,0.09949895);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,101.0372);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,36.41856);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,16.21185);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,8.381581);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,4.798634);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,2.957702);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,1.974173);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,1.357219);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,0.9751997);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,0.7560188);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.5727992);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.4361536);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.3728424);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.2463668);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.1509791);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.1581367);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.154183);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1476016);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.117781);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(21,0.07035638);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04456635);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(3230340);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_algo_Aplanarity_stack_3->SetFillColor(ci);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitle("Aplanarity");
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetRange(1,50);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Aplanarity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Aplanarity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_3->Draw("HIST");
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
