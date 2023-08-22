void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:21:53 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.74374,1.133333,24.69366);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_6 = new TH1D("VbbHcc_algo_Sphericity_stack_6","",25,0,1);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(1,20.90469);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(2,16.22223);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(3,8.871022);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(4,6.253766);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(5,3.743416);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(6,1.738272);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(7,0.6670301);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(8,0.1266904);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(9,0.1179106);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(10,0.08262463);
   VbbHcc_algo_Sphericity_stack_6->SetBinContent(11,0.1103859);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(1,1.58365);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(2,1.380636);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(3,1.024093);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(4,0.8653203);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(5,0.6760367);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(6,0.4611849);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(7,0.2751369);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(8,0.1266904);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(9,0.1179106);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(10,0.08262463);
   VbbHcc_algo_Sphericity_stack_6->SetBinError(11,0.1103859);
   VbbHcc_algo_Sphericity_stack_6->SetEntries(510);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Sphericity_stack_6->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
