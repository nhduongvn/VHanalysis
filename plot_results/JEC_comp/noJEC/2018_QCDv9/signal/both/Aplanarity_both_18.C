#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Mon Mar 20 11:48:34 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-0.697651,1.171633,5.116108);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.534732);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0);
   st_stack_255->SetMaximum(4.534732);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Event/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.690968);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,1.711003);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,1.13369);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.7138908);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.5468542);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.3777267);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.275705);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.1998725);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.1277677);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.08218976);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.08057411);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(12,0.06772743);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.05974308);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.02268845);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(15,0.01308533);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(16,0.005309678);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(18,0.002231337);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(22,0.002019195);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.100691);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.06993191);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.05972612);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.04435103);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.0428687);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.03165393);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.02793961);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.0234499);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.01888895);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.01449373);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.01497447);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(12,0.0136237);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.01370558);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.007345432);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(15,0.005919869);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(16,0.003193875);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(18,0.002231337);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(22,0.002019195);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(3234);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.072859);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.7917701);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.5248148);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.3531034);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.2291216);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.1753972);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.1145739);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.08673342);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.04988123);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.03596539);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.03214166);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.01863885);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.01412368);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.006570255);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.00494295);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.002425643);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.001797131);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(19,0.001350066);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(20,0.0004346981);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.02036295);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.0171897);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.01400407);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.01150621);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.009120258);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.007871333);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.006575231);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.007505801);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.004162043);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.004026071);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.004831523);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.003598583);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.00240036);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.001479432);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.001313864);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0009376206);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0008169495);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(19,0.0007965079);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(20,0.0004346981);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(10352);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
