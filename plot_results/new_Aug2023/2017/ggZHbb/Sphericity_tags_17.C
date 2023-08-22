void Sphericity_tags_17()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Tue Aug 22 09:20:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-0.6730289,1.133333,6.057259);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_10 = new TH1D("VbbHcc_tags_Sphericity_stack_10","",25,0,1);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(1,5.127839);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(2,4.21343);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(3,2.340183);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(4,1.532842);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(5,0.921251);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(6,0.5327102);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(7,0.2836477);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(8,0.1585405);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(9,0.120969);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(10,0.09428246);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(11,0.06252528);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(12,0.05089969);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(13,0.04065653);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(14,0.032026);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(15,0.03146377);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(16,0.01942489);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(17,0.01486511);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(18,0.01201028);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(19,0.005538313);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(20,0.001650737);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(21,0.001219413);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(22,0.0004360391);
   VbbHcc_tags_Sphericity_stack_10->SetBinContent(23,0.0004068213);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(1,0.04484419);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(2,0.04018117);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(3,0.03000729);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(4,0.02431805);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(5,0.0189358);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(6,0.01447688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(7,0.01060765);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(8,0.00796857);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(9,0.006938977);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(10,0.006177688);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(11,0.005051828);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(12,0.004527575);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(13,0.004058572);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(14,0.00357754);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(15,0.003575579);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(16,0.002816797);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(17,0.00246752);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(18,0.002206429);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(19,0.00150112);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(20,0.0008326036);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(21,0.0007052868);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(22,0.0004360391);
   VbbHcc_tags_Sphericity_stack_10->SetBinError(23,0.0004068213);
   VbbHcc_tags_Sphericity_stack_10->SetEntries(40948);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_tags_Sphericity_stack_10->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
