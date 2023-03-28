#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Mon Mar 27 11:09:51 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.310117,-0.05608571,7.029799,0.4112952);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetFillStyle(4000);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_algo_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_algo_17->SetBottomMargin(0.12);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.3645571);
   
   TH1F *st_stack_146 = new TH1F("st_stack_146","",30,0,6);
   st_stack_146->SetMinimum(0);
   st_stack_146->SetMaximum(0.3645571);
   st_stack_146->SetDirectory(0);
   st_stack_146->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_146->SetLineColor(ci);
   st_stack_146->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_146->GetXaxis()->SetRange(1,30);
   st_stack_146->GetXaxis()->SetLabelFont(42);
   st_stack_146->GetXaxis()->SetTitleOffset(1);
   st_stack_146->GetXaxis()->SetTitleFont(42);
   st_stack_146->GetYaxis()->SetTitle("Event/0.2");
   st_stack_146->GetYaxis()->SetLabelFont(42);
   st_stack_146->GetYaxis()->SetTitleSize(0.037);
   st_stack_146->GetYaxis()->SetTitleFont(42);
   st_stack_146->GetZaxis()->SetLabelFont(42);
   st_stack_146->GetZaxis()->SetTitleOffset(1);
   st_stack_146->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_146);
   
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(1,0.04740753);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(2,0.2259759);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(3,0.1359016);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(4,0.04898779);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(5,0.02370377);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(6,0.01580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(7,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(8,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(9,0.006321005);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(10,0.004740753);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(11,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(12,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinContent(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(1,0.008655392);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(2,0.01889706);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(3,0.01465465);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(4,0.008798466);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(5,0.006120286);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(6,0.004997193);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(7,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(8,0.002234813);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(9,0.003160502);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(10,0.002737075);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(11,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(12,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetBinError(14,0.001580251);
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(1,0.01287155);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(2,0.07660649);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(3,0.05086339);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(4,0.01993014);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(5,0.00954986);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(6,0.002698874);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(7,0.001868451);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(8,0.001245634);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(9,0.001038028);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(10,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(11,0.001038028);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(12,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(13,0.0008304226);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(14,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinContent(15,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(1,0.001634689);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(2,0.003987974);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(3,0.003249543);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(4,0.002034112);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(5,0.00140805);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(6,0.0007485328);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(7,0.000622817);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(8,0.0005085279);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(9,0.0004642204);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(10,0.0003595835);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(11,0.0004642204);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(12,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(13,0.0004152113);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(14,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetBinError(15,0.0002935987);
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_dR_Bj0_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_dR_Bj0_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
