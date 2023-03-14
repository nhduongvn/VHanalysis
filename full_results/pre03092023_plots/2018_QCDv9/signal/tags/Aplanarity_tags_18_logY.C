#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tags_18_logY()
{
//=========Macro generated from canvas: Aplanarity_tags_18/Aplanarity_tags_18
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_tags_18 = new TCanvas("Aplanarity_tags_18", "Aplanarity_tags_18",0,0,600,600);
   Aplanarity_tags_18->SetHighLightColor(2);
   Aplanarity_tags_18->Range(-0.2183529,-3.103435,1.171633,0.742719);
   Aplanarity_tags_18->SetFillColor(0);
   Aplanarity_tags_18->SetFillStyle(4000);
   Aplanarity_tags_18->SetBorderMode(0);
   Aplanarity_tags_18->SetBorderSize(2);
   Aplanarity_tags_18->SetLogy();
   Aplanarity_tags_18->SetLeftMargin(0.15709);
   Aplanarity_tags_18->SetRightMargin(0.1234783);
   Aplanarity_tags_18->SetBottomMargin(0.12);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   Aplanarity_tags_18->SetFrameFillStyle(1000);
   Aplanarity_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   
   TH1F *st_stack_63 = new TH1F("st_stack_63","",50,0,1);
   st_stack_63->SetMinimum(14.16031);
   st_stack_63->SetMaximum(2.280886);
   st_stack_63->SetDirectory(0);
   st_stack_63->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_63->SetLineColor(ci);
   st_stack_63->GetXaxis()->SetTitle("Aplanarity");
   st_stack_63->GetXaxis()->SetRange(1,50);
   st_stack_63->GetXaxis()->SetLabelFont(42);
   st_stack_63->GetXaxis()->SetTitleOffset(1);
   st_stack_63->GetXaxis()->SetTitleFont(42);
   st_stack_63->GetYaxis()->SetTitle("Event/0.02");
   st_stack_63->GetYaxis()->SetLabelFont(42);
   st_stack_63->GetYaxis()->SetTitleSize(0.037);
   st_stack_63->GetYaxis()->SetTitleFont(42);
   st_stack_63->GetZaxis()->SetLabelFont(42);
   st_stack_63->GetZaxis()->SetTitleOffset(1);
   st_stack_63->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_63);
   
   
   TH1D *VbbHcc_tags_Aplanarity_stack_1 = new TH1D("VbbHcc_tags_Aplanarity_stack_1","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(1,1.852641);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(2,1.156138);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(3,0.7778615);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(4,0.4884124);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(5,0.3725479);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(6,0.2636319);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(7,0.1869547);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(8,0.1333597);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(9,0.0881869);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(10,0.05736383);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(11,0.05623619);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(12,0.04496578);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(13,0.04169731);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(14,0.01583526);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(15,0.009132825);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(16,0.003705857);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(18,0.001557348);
   VbbHcc_tags_Aplanarity_stack_1->SetBinContent(22,0.001409285);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(1,0.06996366);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(2,0.04808089);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(3,0.04137312);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(4,0.03067361);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(5,0.02962246);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(6,0.02209266);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(7,0.01922985);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(8,0.0159718);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(9,0.01314637);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(10,0.01011581);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(11,0.01045134);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(12,0.009225178);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(13,0.009565726);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(14,0.005126698);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(15,0.004131735);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(16,0.002229145);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(18,0.001557348);
   VbbHcc_tags_Aplanarity_stack_1->SetBinError(22,0.001409285);
   VbbHcc_tags_Aplanarity_stack_1->SetEntries(3172);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_tags_Aplanarity_stack_2 = new TH1D("VbbHcc_tags_Aplanarity_stack_2","",50,0,1);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(1,0.7319922);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(2,0.5411759);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(3,0.3583456);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(4,0.2420998);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(5,0.1561124);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(6,0.1195494);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(7,0.07912375);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(8,0.05950687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(9,0.03405297);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(10,0.02453687);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(11,0.02173214);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(12,0.01271968);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(13,0.00985753);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(14,0.004361936);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(15,0.003516783);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(16,0.001692962);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(17,0.001254296);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(19,0.0007049177);
   VbbHcc_tags_Aplanarity_stack_2->SetBinContent(20,0.0003033948);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(1,0.01407123);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(2,0.01188002);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(3,0.009673845);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(4,0.007959153);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(5,0.006291007);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(6,0.005428858);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(7,0.004561723);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(8,0.005212885);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(9,0.00287099);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(10,0.00278139);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(11,0.003347056);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(12,0.002503185);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(13,0.001675316);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(14,0.00100803);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(15,0.0009357484);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(16,0.0006544064);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(17,0.0005701847);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(19,0.0005027012);
   VbbHcc_tags_Aplanarity_stack_2->SetBinError(20,0.0003033948);
   VbbHcc_tags_Aplanarity_stack_2->SetEntries(10130);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_Aplanarity_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tags_18->Modified();
   Aplanarity_tags_18->cd();
   Aplanarity_tags_18->SetSelected(Aplanarity_tags_18);
}
