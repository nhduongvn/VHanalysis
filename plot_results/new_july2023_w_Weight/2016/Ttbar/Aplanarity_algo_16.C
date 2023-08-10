void Aplanarity_algo_16()
{
//=========Macro generated from canvas: Aplanarity_algo_16/Aplanarity_algo_16
//=========  (Thu Aug 10 12:24:19 2023) by ROOT version 6.14/09
   TCanvas *Aplanarity_algo_16 = new TCanvas("Aplanarity_algo_16", "Aplanarity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_algo_16->SetHighLightColor(2);
   Aplanarity_algo_16->Range(-0.2,-46128.06,1.133333,415152.5);
   Aplanarity_algo_16->SetFillColor(0);
   Aplanarity_algo_16->SetBorderMode(0);
   Aplanarity_algo_16->SetBorderSize(2);
   Aplanarity_algo_16->SetLeftMargin(0.15);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   Aplanarity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Aplanarity_stack_3 = new TH1D("VbbHcc_algo_Aplanarity_stack_3","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(1,351451.9);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(2,47838.81);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(3,10070.09);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(4,2842.941);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(5,950.2919);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(6,378.0098);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(7,167.0943);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(8,76.90358);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(9,40.46193);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(10,18.61186);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(11,11.72114);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(12,6.642724);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(13,4.681372);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(14,2.122362);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(15,1.335477);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(16,0.7091245);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(17,0.4293485);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(18,0.3333904);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(19,0.05079964);
   VbbHcc_algo_Aplanarity_stack_3->SetBinContent(22,0.04494681);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(1,156.5856);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(2,57.47006);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(3,26.15175);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(4,13.7601);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(5,7.879381);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(6,4.936804);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(7,3.254674);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(8,2.193107);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(9,1.590453);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(10,1.050185);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(11,0.844293);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(12,0.6293906);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(13,0.5416464);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(14,0.3549448);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(15,0.2702218);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(16,0.2139574);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(17,0.1578814);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(18,0.1380806);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(19,0.05079964);
   VbbHcc_algo_Aplanarity_stack_3->SetBinError(22,0.04494681);
   VbbHcc_algo_Aplanarity_stack_3->SetEntries(6426049);

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
