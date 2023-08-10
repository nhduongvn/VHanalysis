void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:24:17 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-664.9031,1.133333,5984.128);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_4 = new TH1D("VbbHcc_algo_Sphericity_stack_4","",25,0,1);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(1,5065.928);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(2,5042.938);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(3,2795.491);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(4,1634.558);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(5,844.0292);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(6,355.3622);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(7,102.0488);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(8,43.4428);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(9,9.506824);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(10,5.889396);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(11,2.957155);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(12,3.517669);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(13,2.075384);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(14,0.7221222);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(15,4.242717);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(16,0.5806589);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(17,0.2794018);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(18,0.5062305);
   VbbHcc_algo_Sphericity_stack_4->SetBinContent(19,0.09168719);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(1,60.21976);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(2,68.22827);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(3,48.522);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(4,35.88387);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(5,24.74921);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(6,14.758);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(7,6.386355);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(8,5.897896);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(9,1.321998);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(10,1.109285);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(11,0.6434283);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(12,0.8664238);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(13,0.5718514);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(14,0.2550302);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(15,2.898579);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(16,0.2394471);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(17,0.1203822);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(18,0.2882263);
   VbbHcc_algo_Sphericity_stack_4->SetBinError(19,0.06683991);
   VbbHcc_algo_Sphericity_stack_4->SetEntries(94081);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_4->Draw("HIST");
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
