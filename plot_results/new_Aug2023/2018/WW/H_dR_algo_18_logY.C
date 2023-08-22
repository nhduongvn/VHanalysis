void H_dR_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_algo_18/H_dR_algo_18
//=========  (Tue Aug 22 09:17:09 2023) by ROOT version 6.14/09
   TCanvas *H_dR_algo_18 = new TCanvas("H_dR_algo_18", "H_dR_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_18->SetHighLightColor(2);
   H_dR_algo_18->Range(-1.2,-0.7587039,6.8,1.006626);
   H_dR_algo_18->SetFillColor(0);
   H_dR_algo_18->SetBorderMode(0);
   H_dR_algo_18->SetBorderSize(2);
   H_dR_algo_18->SetLogy();
   H_dR_algo_18->SetLeftMargin(0.15);
   H_dR_algo_18->SetFrameBorderMode(0);
   H_dR_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_stack_6 = new TH1D("VbbHcc_algo_H_dR_stack_6","",30,0,6);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(3,1.677165);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(4,1.228621);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(5,2.744998);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(7,1.857721);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(8,1.455056);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(9,1.004731);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(10,1.751837);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(11,1.401868);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(12,1.277965);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(13,3.568982);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(14,0.9932979);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(15,2.768877);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(16,2.421512);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(17,2.202205);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(18,0.6783453);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(19,2.058606);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(20,1.715457);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(21,3.077445);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(22,0.563917);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(23,0.5234306);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(24,2.255174);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(26,0.6060574);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(29,1.319442);
   VbbHcc_algo_H_dR_stack_6->SetBinContent(31,0.5354066);
   VbbHcc_algo_H_dR_stack_6->SetBinError(3,0.9683492);
   VbbHcc_algo_H_dR_stack_6->SetBinError(4,0.8688448);
   VbbHcc_algo_H_dR_stack_6->SetBinError(5,1.403823);
   VbbHcc_algo_H_dR_stack_6->SetBinError(7,1.080216);
   VbbHcc_algo_H_dR_stack_6->SetBinError(8,1.455056);
   VbbHcc_algo_H_dR_stack_6->SetBinError(9,0.7258973);
   VbbHcc_algo_H_dR_stack_6->SetBinError(10,1.01188);
   VbbHcc_algo_H_dR_stack_6->SetBinError(11,0.9944214);
   VbbHcc_algo_H_dR_stack_6->SetBinError(12,0.9266566);
   VbbHcc_algo_H_dR_stack_6->SetBinError(13,1.493538);
   VbbHcc_algo_H_dR_stack_6->SetBinError(14,0.7635089);
   VbbHcc_algo_H_dR_stack_6->SetBinError(15,1.419513);
   VbbHcc_algo_H_dR_stack_6->SetBinError(16,1.265643);
   VbbHcc_algo_H_dR_stack_6->SetBinError(17,1.10658);
   VbbHcc_algo_H_dR_stack_6->SetBinError(18,0.6783453);
   VbbHcc_algo_H_dR_stack_6->SetBinError(19,1.201392);
   VbbHcc_algo_H_dR_stack_6->SetBinError(20,0.995217);
   VbbHcc_algo_H_dR_stack_6->SetBinError(21,2.59781);
   VbbHcc_algo_H_dR_stack_6->SetBinError(22,0.563917);
   VbbHcc_algo_H_dR_stack_6->SetBinError(23,0.5234306);
   VbbHcc_algo_H_dR_stack_6->SetBinError(24,1.30364);
   VbbHcc_algo_H_dR_stack_6->SetBinError(26,0.6060574);
   VbbHcc_algo_H_dR_stack_6->SetBinError(29,0.9446466);
   VbbHcc_algo_H_dR_stack_6->SetBinError(31,0.5354066);
   VbbHcc_algo_H_dR_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_18->Modified();
   H_dR_algo_18->cd();
   H_dR_algo_18->SetSelected(H_dR_algo_18);
}
